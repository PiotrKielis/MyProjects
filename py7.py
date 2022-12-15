#1. Stwórz listę w której będą wyniki dużego lotka.
list = [45,54,64,12,15,17]
print(list)
print(type(list))
print("------------------------------------------")
#2. Stwórz słownik (dict) w którym będziesz przechowywał informację o ilości
#schronisk w danym mieście dla miast (kluczy): Kraków, Warszawa, Poznań.
map = {
    'Kraków' : '10',
    'Warszawa' : '40',
    'Poznan' : '17'
}
print(map)
print(type(map))
print("------------------------------------------")
#3. W Poznaniu i Krakowie wybudowano nowe schronisko, w Warszawie wybudowano aż trzy.
#W poprzednio utworzonym słowniku (dict) zaktualizuj informację o liczbie schronisk.
map['Poznan'] = '11'
map['Krakow'] = '18'
map['Warszawa'] = '41'
print(map['Poznan'])
print(map['Warszawa'])
print(map['Krakow'])
print("------------------------------------------")
#4. Do naszego słownika z informacją o schroniskach
#dodaj nowe miasto Rzeszów z liczbą schronisk 3.
#map["Rzeszow"] = '22'
map.update(Rzeszow = 22)
print(map)
print("------------------------------------------")
#Stwórz słownik w którym kluczami będą daty w formacie 'YYYY-MM-DD',
#a wartościami wyniki dużego lotka. Wykonaj zadanie dla ostatnich 3 losowań (albo wprowadź własne liczby).
map = {'2022-02-17':11 '2022-01-13':18 '2022-03-14':41 '2022-07-15':22}
print(map)
