import random

class Dictionary:
    wordle = [10]
    f=open("dictionary.txt","r",encoding="utf-8")
    wordle = f.read().splitlines()
    f.close()
    randw=wordle[random.randint(0,len(wordle))]

class Validator:
    def is_isogram(self, game_word):
        player_word = game_word.lower()
        letters = []

        for letter in player_word:
            if letter.isalpha():
                if letter in letters:
                    return False
                letters.append(letter)
            else:
                return False

        return True
    # s = Dictionary.randw
    # print(is_isogram(s))


class Stats:
    cows=0
    bulls=0

class Engine:
    games_word = None
    def game_menu():
        print(f"Welcome in Bulls&Cows\n1 - Start New Game\n2 - Kids Wordle game\n3 - Rules\n4 - Exit \nChoose one option below: ")
    def game_rules():
        print(
            "A text game where the computer randomizes a word that is an isogram. \nUser tries to guess what the word is\n Number next to the word Cows denotes a letter in the word but in the wrong position,the number in the word\n Bulls marks the correct letter in the correct position.")
    def print_bulls():
        print(f"Bulls: {Stats.bulls}")
    def print_cows():
        print(f"Cows: {Stats.cows}")
    def add_bulls():
        Stats.bulls = Stats.bulls + 1
    def add_cows():
        Stats.cows = Stats.cows + 1
    def exit_game():
        print(f"Thank you for playing Bulls&Cows")


    def start_game(self):
        Engine.game_menu()
        choice = int(input())
        if choice == 1:
                self.games_word = Dictionary.randw
                print(f"Words letters: {len(self.games_word)}")
                self.games_word = self.games_word.lower()
                print(f"How many attempts would you have?")
                attempt = int(input())
                while attempt > 0 and Stats.bulls != len(self.games_word):
                    score = 0
                    Stats.cows = 0
                    Stats.bulls = 0
                    print(f"Attempts remaining: {attempt}\n")
                    players_word = input()
                    while Validator.is_isogram(self,players_word) == -1:
                        players_word = input()
                    while len(players_word) != len(self.games_word):
                        print(f"Wrong numbers of letters: ")
                        players_word = input()
                    for i in range(0, len(self.games_word)):
                        if self.games_word[i] == players_word[i]:
                            Engine.add_bulls()
                        for j in range(0, len(self.games_word)):
                            if players_word[j] == self.games_word[i] and i != j:
                                Engine.add_cows()
                    Engine.print_bulls()
                    Engine.print_cows()
                    if Stats.bulls == len(self.games_word):
                        score = 1
                        print(f"You win")
                    attempt = attempt - 1
                if score == 0:
                    print(f"You lost")
                start.start_game()
        elif choice ==2:
            word = None
            word = Dictionary.randw
            print("Guess the characters")
            guesses = ''
            turns = 12
            while turns > 0:
                failed = 0
                for char in word:
                    if char in guesses:
                        print(char, end=" ")
                    else:
                        print("_")
                        failed += 1
                if failed == 0:
                    print("You Win")
                    print("The word is: ", word)
                    input("Press Enter to exit...")

                    break
                print()
                guess = input("guess a character:")
                guesses += guess
                if guess not in word:
                    turns -= 1
                    print("Wrong")
                    print("You have", + turns, 'more guesses')

                    if turns == 0:
                        print("You Loose")
                        print("Quessing word is ", word)
                        input("Press Enter to exit...")
        elif choice == 3:
                Engine.game_rules()
                print(f"To start game choose 1: ")
                choice = int(input())
                while choice != 1:
                    print(f"To start game choose 1: ")
                    back = int(input())
                start.start_game()
        elif choice == 4:
                Engine.exit_game()



start=Engine()
start.start_game()

