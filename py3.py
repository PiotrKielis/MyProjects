import random
score_file = "user_score.txt"
def game_rules():
    print('A text game where the computer randomizes a word that is an isogram. \n'
          'User tries to guess what the word is\n' 
          'Number next to the word Cows denotes a letter in the word but in the wrong position,the number in the word\n '
          'Bulls marks the correct letter in the correct position.')

def game_menu():
    menu_options = {
        1: 'Start new game',
        2: 'Rules',
        3: 'Exit',
    }
    print("Chosen option")
    for x in options.x():
        print(x,' ',options[x])

def bullscows(stats,rand_word,word):
    for i in range(0,len(rand_word)):
        if word[i]==rand_word[i]:
            Stats.add_bulls()
    for j in range(0,len(rand_word)):
        if word[j]==rand_word[j] and i!=j:
            Stats.add_cows()






class Dictionary:
    worlde_arr = []
    f=open("dictionary.txt", "r", encoding="utf-8")
    wordle_arr = f.read().splitlines()
    for i in range(0,10): print(f"{wordle_arr[i]}")
    f.close()
    randw=wordle_arr[random.randint(0,10)]
    #print(f"Drawn word is  {randw} lenght {len(randw)} ")

class Validator:

    def is_isogram(word):
        char_list = []
        for char in word:
            if char.isalpha():
                if char in char_list:
                    return False
                    char_list.append(char)
        return True

    #s = Dictionary.randw
    #print(is_isogram(s))
class Stats:
    bulls = 0
    cows = 0

    def _bulls(self):
        return self.bulls
    def _cows(self):
        return self.cows
    def add_bulls(self):
        self.bulls +=1
    def add_cows(self):
        self.cows +=1
    def restart(self):
        self.bulls = 0
        self.cows = 0
class Engine:
    def start(self):
        game_in_process = True
        while game_in_process:
            game_menu()
            game_choice = int(input("Your choice: "))
            if game_choice == 1:
                self.game_process(self.limit_of_attempts)
            if game_choice == 2:
                game_rules()
            if game_choice == 3:
                print("Thank you for playing Bulls & Cows. See u next time")
    def game_process(self,limit_of_attempts):




game_rules()
game_menu()

