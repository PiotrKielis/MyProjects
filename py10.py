#✏️ 1. Napisz funkcję która przyjmie listę liczb jako argument i zwróci sumę liczb znajdujących się w liście.
#✏️ 2. Napisz funkcję która przyjmie dowolnie długą listę liczb (użyj *args) i zwróci wartość najmniejszą (użyj funkcji wbudowanej min).
#✏️ 3. Napisz funkcję która przyjmie od użytkownika dane: imie (str), nazwisko (str), grupa (str), obecny (bool) i zapisze je do globalnej listy studentów.
list1 = [11, 5, 17, 18, 23]
def sumOfList(list, size):
    if (size == 0):
        return 0
    else:
        return list[size - 1] + sumOfList(list, size - 1)
total = sumOfList(list1, len(list1))
print("Suma elementow w tablicy : ", total)
print("----------------------------------------------")
def min_val(*args):
    print("min element",min(args))
min_val(1,2,3,4,5,6)
print("----------------------------------------------")
aList = []

def bar():
    print("Podaj imie")
    imie = str(input())
    print("Podaj nazwisko")
    nazwisko = str(input())
    print("Podaj grupe")
    grupa = str(input())
    print("Obecny/nieobecny")
    obecny = bool(input())
    aList.append(imie)
    aList.append(nazwisko)
    aList.append(grupa)
    aList.append(obecny)



bar()
print(aList)
