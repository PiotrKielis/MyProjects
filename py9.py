
def hello():
    print("Hello World")
#----------------------------
def say_hello(name):
    print(f"Hello World {name}")

say_hello("Patryk")
say_hello("Piotrek")
say_hello("Iza")
#------------------------
def say_hello_to(a,b,c):
    print(f"Hello {a} {b} {c}")
say_hello_to("raz","dwa","trzy")
#-------------------------------------
def say_hello_args(*args):
    for numer in args:
        print(f"element {numer}")
say_hello_args("a","b","c","d")

def pomnoz(liczba, mnoznik =2):
    wynik = liczba * mnoznik
    print(wynik)
    pomnoz(10)
