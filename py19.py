#Przygotuj klasę reprezentacją figurę na szachownicy o dwóch polach - nazwa oraz waga.
#Za pomocą odpowiednio zdefiniowanych magicznych metod posortuj za pomocą metody sorted(), a następnie wypisz w konsoli
from os.path import join
class figure():
    nazwa = None
    waga = None
    def __init__(self,nazwa,waga):
        self.nazwa = nazwa
        self.waga = waga

        def __repr__(self):
            return f" ( {self.nazwa}, {self.waga})"

        def __lt__(self, other):
            return self.waga < other.waga
f1 = figure("dama",20)
f2 = figure("goniec",15)
f3 = figure("pionek",5)
f4 = figure("skoczek",11)
f5 = figure("krol",24)
l = [f1.waga, f2.waga, f3.waga, f4.waga, f5.waga]
print(l)
print(sorted(l))
