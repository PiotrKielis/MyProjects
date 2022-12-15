print("OOP")

class Telefon:
    producent = None #Apple
    model = None #iPhone 14
    cena = None

    def __init__(self,producent,model,cena):
        self.producent = producent
        self.model = model
        self.cena = cena

    def opisz_telefon(self):
        print(f"telefon marki{self.producent} model:{self.model}, kosztuje{self.cena} zł")

    def __repr__(self):
    #def __eq__(self, other):
     #   if not isinstance(other,Telefon):
      #      return
       # return self.model == other.model and self.producent == other.producent
    def __str__(self):
        return f"Producent {self.producent},model {self.model}, cena {self.cena}"

telefon1 = Telefon("Apple", "Iphone 14",5000)
telefon2 = Telefon("Samsung", "S22",4000)
telefon3 = Telefon("Huawei","P40",2000)
telefon3.opisz_telefon()
telefon2.opisz_telefon()
telefon1.opisz_telefon()

print(f"moje telefonu: {telefon1}, {telefon2},{telefon3}")
czy_takie_same = telefon1 == telefon2
print(f"czy telefony sa takie same?: {czy_takie_same}")

zmienna = telefon1.model
