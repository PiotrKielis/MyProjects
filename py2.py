import re

print(f"wyrażenia regularne - regexy")

text = "Drzewo owocowe to przykładowo wiśnia"
x = re.search('(^Drzewo)*[a-z]', text)
if x:
    print(f"regex poprawny, wartosc {x}")
else:
    print(f"wynik None")
