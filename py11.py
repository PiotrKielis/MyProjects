import random

x = 10 # global scope
print(f"zmienna x = {x}")
def dodaj_liczbe_do_x(liczba2):
    liczba2 # local scope
    global r
    r = 100
    wynik = x + liczba2
dodaj_liczbe_do_x(4)
print(f"moja liczba to {r}")
print("-------------------------------------")
import random
losowa_liczba = random.randint(0,10)

print(f"losowa liczba to: {losowa_liczba}")
wartosc = random.random()
print(f"losowa wartosc to: {wartosc}")

lista = ["banan", "jabłko", "śliwka", "arbuz"]
x = random.randint(0,len(lista))
wybrany_element = random.choice(lista)
print(f"Dzis bede jadl:{wybrany_element}")

print(f"{lista}")
random.shuffle(lista)
print(f"{lista}")
