import io
import os
plik = "dataset.txt"
try:
    with open(plik, 'w') as file: #read #write #append
        #dane = file.read()
        #print(f"w pliku znajduja sie: {dane}")
        file.write("nowy tekst dodaje do pliku")
except FileNotFoundError:
    print(f"ten plik nie istnieje")
except io.UnsupportedOperation:
    print(f"nie mozna wykonac tej operacji")


#os.remove(plik)
