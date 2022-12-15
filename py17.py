import os
import random
plik = "integer_dataset.txt"
rand_list=[]
n=30
for i in range(n):
    rand_list.append(random.randint(0,200))
try:
    with open(plik, 'w') as file:
        file.write(f"{rand_list}")
except FileNotFoundError:
    print(f"ten plik nie istnieje")

def min_val(*args):
    print("min element",min(rand_list))
min_val(rand_list)
def max_val(*args):
    print("min element",max(rand_list))
max_val(rand_list)
def sum_of_even_num(lista):
    result = 0
    for item in rand_list:
        if not item%2:
            result += item
    print(f"suma liczb parzystych to :{result}")
sum_of_even_num(rand_list)


def Average(list):
    return sum(list) / len(list)
average = Average(rand_list)
print("Srednia wygenerowanych liczb to=", round(average, 2))

def sum_of_num_equal_or_higher_than_100(list):
    result = 0
    for item in list:
        if item <= 100:
            result += item
    print(f"suma liczb wiekszych badz rownych 100 :{result}")
sum_of_num_equal_or_higher_than_100(rand_list)
