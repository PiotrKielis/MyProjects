import os
plik = "database.txt"

if os.path.exists(plik):
    print(f"plik {plik} istnieje a teraz sprawdze co to za typ")
    if os.path.isfile(plik):
        print(f"jest plikiem")
    elif os.path.isdir(plik):
        print(f"sciezka jest katalogiem")
else:
    print(f"plik nie istnieje")
