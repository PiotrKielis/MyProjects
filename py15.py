from collections import Counter
def stworz_histogram(dane):
    histogram = Counter(dane)
    print(f"histogram: {histogram}")
    return histogram
def posortuj(histogram):
    posortowowane = sorted(histogram.items(), key=lambda el: el[1], reverse=True)
    print(f"Posortowane 5 najwiekszych {posortowowane[0:5]}")

def podmienione(posortuj):
    z1 = posortowowane[1][0]
    z2 = posortowowane[2][0]
    podmienione = dane.replace(z1, z2).replace(z2, z1).replace('{!@#}', z2)
    print(f"podmienione z1 z z2: {podmienione}")
def odwrocone(dane):
    odwrocone = dane[::-1]
    print(f"odwrocony string {odwrocone}")
def finalne_dane(dane):
    for i in range(0, len(dane), 2):
        dane = list(dane)
        dane[i], dane[i + 1] = dane[i + 1], dane[i]
        print(f"ostateczne dane: {''.join(dane)}")

plik = "dane.txt"
try:
    with open(plik) as file:
        dane = file.read()
        print(f"odczytane dane: {dane}")

        histogram = stworz_histogram(dane)
        posortuj(histogram)
        podmienione(dane)
        odwrocone(dane)
        finalne_dane(dane)
        #histogram = Counter(dane)
        #print(f"histogram:{histogram}")

        #posortowowane = sorted(histogram.items(), key=lambda el: el[1], reverse=True)
        #print(f"Posortowane 5 najwiekszych {posortowowane[0:5]}")

        #z1 = posortowowane[1][0]
        #z2 = posortowowane[2][0]
        #podmienione = dane.replace(z1,z2).replace(z2,z1).replace('{!@#}',z2)
        #print(f"podmienione z1 z z2: {podmienione}")

        #odwrocone = dane[::-1]
        #print(f"odwrocony string {odwrocone}")

        #for i in range(0, len(dane), 2):
         #   dane = list(dane)
          #  dane[i], dane[i + 1] = dane[i + 1], dane[i]
           # print(f"ostateczne dane: {''.join(dane)}")


except FileNotFoundError:
    print(f"Niestety nie ma takiego pliku")
