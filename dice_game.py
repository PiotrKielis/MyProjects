import random

class Dice:
    def __init__(self, sides):
        self.__sides = sides
        self.__value = None

    def roll(self):
        self.__value = random.randint(1, self.__sides)

    def get_sides(self):
        return self.__sides

    def get_value(self):
        return self.__value

    def __str__(self):
        return f"Dice with {self.__sides} sides, value: {self.__value}"

def main():
    print("Welcome to the game of Dice!")
    computer_dice = Dice(6)
    player_dice = Dice(6)
    computer_points = 0
    player_points = 0

    while True:
        computer_dice.roll()
        computer_points += computer_dice.get_value()
        #print(f"Computer rolls {computer_dice.get_value()}")

        choice = input("Do you want to roll the dice? (y/n): ")
        if choice.lower() == 'y':
            player_dice.roll()
            player_points += player_dice.get_value()
            print(f"You roll {player_dice.get_value()}")
        else:
            break

        if player_points > 21:
            print("You lost!")
            return

    print(f"Computer's points: {computer_points}")
    print(f"Player's points: {player_points}")
    if computer_points > 21 or player_points > computer_points:
        print("You win!")
    elif player_points == computer_points:
        print("Tie!")
    else:
        print("You lost!")

if __name__ == '__main__':
    main()
