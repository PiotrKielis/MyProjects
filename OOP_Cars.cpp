#include <iostream>
#include <string>

class Silnik
{
private:
    bool uruchomiony;
    int bieg;

public:
    Silnik() : uruchomiony(false), bieg(0) {}

    void Uruchom() { uruchomiony = true; }
    void Zgas() { uruchomiony = false; }
    void ZmienBieg(int bieg) { this->bieg = bieg; }

    bool CzyUruchomiony() const { return uruchomiony; }
    int BiezacyBieg() const { return bieg; }
};

class PojazdSilnikowy
{
protected:
    std::string model;
    int rocznik;
    Silnik silnik;

public:
    PojazdSilnikowy(std::string model, int rocznik) : model(model), rocznik(rocznik) {}
    PojazdSilnikowy(const PojazdSilnikowy& pojazd) : model(pojazd.model), rocznik(pojazd.rocznik), silnik(pojazd.silnik) {}

    virtual void Przejedz(int km) = 0;

    friend std::ostream& operator<<(std::ostream& out, const PojazdSilnikowy& pojazd);
};

std::ostream& operator<<(std::ostream& out, const PojazdSilnikowy& pojazd)
{
    out << "Model: " << pojazd.model << ", rocznik: " << pojazd.rocznik << ", silnik: " << (pojazd.silnik.CzyUruchomiony() ? "uruchomiony" : "zgaszony") << ", bieg: " << pojazd.silnik.BiezacyBieg();
    return out;
}

class SamochodSpalinowy : public PojazdSilnikowy
{
private:
    bool uruchomiony;
    int bieg;
    double poziomPaliwa;
    double pojemnoscBaku;
    double zuzyciePaliwaNaKm;
    double przebieg;

public:
    SamochodSpalinowy(std::string model, int rocznik, double pojemnoscBaku, double zuzyciePaliwaNaKm) : PojazdSilnikowy(model, rocznik), uruchomiony(false), bieg(0), poziomPaliwa(0), pojemnoscBaku(pojemnoscBaku), zuzyciePaliwaNaKm(zuzyciePaliwaNaKm), przebieg(0) {}
    SamochodSpalinowy(const SamochodSpalinowy& samochod) : PojazdSilnikowy(samochod), uruchomiony(samochod.uruchomiony), bieg(samochod.bieg), poziomPaliwa(samochod.poziomPaliwa), pojemnoscBaku(samochod.pojemnoscBaku), zuzyciePaliwaNaKm(samochod.zuzyciePaliwaNaKm), przebieg(samochod.przebieg) {}

    void Uruchom() { uruchomiony = true; silnik.Uruchom(); }
    void Zgas() { uruchomiony = false; silnik.Zgas(); }
    void ZmienBieg(int bieg) { this->bieg = bieg; silnik.ZmienBieg(bieg); }
    void Przejedz(int km) override;
    void Zatankuj(double iloscPaliwa);

    double BiezacyPoziomPaliwa() const { return poziomPaliwa; }
    double BiezacyPrzebieg() const { return przebieg; }
};

void SamochodSpalinowy::Przejedz(int km)
{
    if (uruchomiony)
    {
        double zuzytePaliwo = km * zuzyciePaliwaNaKm;
        if (poziomPaliwa >= zuzytePaliwo)
        {
            poziomPaliwa -= zuzytePaliwo;
            przebieg += km;
        }
        else
            throw std::runtime_error("Za malo paliwa!");
    }
    else
        throw std::runtime_error("Samochod nie jest uruchomiony!");
}

void SamochodSpalinowy::Zatankuj(double iloscPaliwa)
{
    if (iloscPaliwa + poziomPaliwa > pojemnoscBaku)
        throw std::runtime_error("Za duzo paliwa!");
    else
        poziomPaliwa += iloscPaliwa;
}

class SamochodElektryczny : public PojazdSilnikowy
{
private:
    bool uruchomiony;
    int bieg;
    double poziomNaladowaniaBaterii;
    double maksymalnyZasieg;

public:
    SamochodElektryczny(std::string model, int rocznik, double maksymalnyZasieg) : PojazdSilnikowy(model, rocznik), uruchomiony(false), bieg(0), poziomNaladowaniaBaterii(0), maksymalnyZasieg(maksymalnyZasieg) {}
    SamochodElektryczny(const SamochodElektryczny& samochod) : PojazdSilnikowy(samochod), uruchomiony(samochod.uruchomiony), bieg(samochod.bieg), poziomNaladowaniaBaterii(samochod.poziomNaladowaniaBaterii), maksymalnyZasieg(samochod.maksymalnyZasieg) {}

    void Uruchom() { uruchomiony = true; silnik.Uruchom(); }
    void Zgas() { uruchomiony = false; silnik.Zgas(); }
    void ZmienBieg(int bieg) { this->bieg = bieg; silnik.ZmienBieg(bieg); }
    void Przejedz(int km) override;
    void Doladuj();

    double BiezacyPoziomNaladowaniaBaterii() const { return poziomNaladowaniaBaterii; }
};

void SamochodElektryczny::Przejedz(int km)
{
    if (uruchomiony)
    {
        if (poziomNaladowaniaBaterii >= km)
        {
            poziomNaladowaniaBaterii -= km;
        }
        else
            throw std::runtime_error("Za malo energii!");
    }
    else
        throw std::runtime_error("Samochod nie jest uruchomiony!");
}

void SamochodElektryczny::Doladuj()
{
    poziomNaladowaniaBaterii = maksymalnyZasieg;
}

int main()
{
    SamochodSpalinowy samochod1("Fiat", 2020, 50, 0.1);
    SamochodElektryczny samochod2("Tesla", 2020, 500);

    samochod1.Uruchom();
    samochod2.Uruchom();

    samochod1.Zatankuj(50);
    samochod2.Doladuj();

    samochod1.ZmienBieg(2);
    samochod2.ZmienBieg(4);

    samochod1.Przejedz(100);
    samochod2.Przejedz(100);

    std::cout << samochod1 << std::endl;
    std::cout << samochod2 << std::endl;

    return 0;
}
