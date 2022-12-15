#lista = [1,2,3,4]
#print(lista)
#print(type(lista))
#print(lista[2])

tablica = ["a","b","c","d"]
print(tablica)

tablica.append("e") #dodanie na koncu listy
print(tablica)

tablica[1] = "x" #edycja konkretnego elementu
print(tablica)

del tablica[2] #usuniecie elementu o danym indexie
print(tablica)

del tablica[1:] #usuniecie wszystkiego od
print(tablica)

#lista slowko list, mozna edytowac, dowolny typ danych

tupla = ("czerwony", "niebieski", "zolty")
print(tupla)
print(tupla[0])
print(tupla[1:])
del tupla #mozna usunac cala tuple
print("--------------------------")
mapa = {
    'klucz1' : 'czerwony',
    'klucz2' : 'czarny',
    'klucz3' : 'bialy'
}
print(type(mapa)) #dict
print(mapa)
print(mapa['klucz1']) #odowolanie w mapie
print("-----------------------")
s = set([1,2,3,4,5,5]) #wartosc musi byc unikatowa, nie moze byc zduplikowana
print(s)
print(type(s)) #set
print("----------------------------")

