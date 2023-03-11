import random

def throw():
    """Funkcja zwracająca wynik rzutu dwoma kośćmi"""
    return random.randint(1,6) + random.randint(1,6)

def single_game():
    """Funkcja obsługująca pojedynczą grę"""
    first_throw = throw()
    print(f"Pierwszy rzut: {first_throw}")
    if first_throw in [7, 11]:
        print("Gracz wygrywa!")
        return True
    elif first_throw in [2, 3, 12]:
        print("Gracz przegrywa!")
        return False
    else:
        print(f"Gracz otrzymuje punkt: {first_throw}")
        while True:
            next_throw = throw()
            print(f"Kolejny rzut: {next_throw}")
            if next_throw == 7:
                print("Gracz przegrywa!")
                return False
            elif next_throw == first_throw:
                print("Gracz wygrywa!")
                return True

def get_answer():
    """Funkcja pobierająca i zwracająca prawidłową odpowiedź"""
    while True:
        answer = input("Czy chcesz zagrać jeszcze raz? (tak/nie): ")
        if answer.lower() in ['tak', 'nie']:
            return answer.lower() == 'tak'

def game():
    """Funkcja realizująca całą rozgrywkę"""
    wins = 0
    losses = 0
    while True:
        print("Nowa gra!")
        if single_game():
            wins += 1
        else:
            losses += 1
        if not get_answer():
            print(f"Liczba wygranych: {wins}")
            print(f"Liczba przegranych: {losses}")
            return

game()
