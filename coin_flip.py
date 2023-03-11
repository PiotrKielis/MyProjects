import random


class Coin:
    def __init__(self):
        self.side = 'Heads'

    def throw(self):
        if random.randint(0, 1) == 0:
            self.side = 'Heads'
        else:
            self.side = 'Tails'

    def __str__(self):
        return self.side

def simulate_fifteen_flips():
    # Utworzenie kilku obiektów klasy Coin
    coin1 = Coin()
    coin2 = Coin()
    coin3 = Coin()

    # Wywołanie metody throw() 15 razy dla każdej monety
    for i in range(15):
        coin1.throw()
        coin2.throw()
        coin3.throw()
        print(f"Coin 1: {coin1}, Coin 2: {coin2}, Coin 3: {coin3}")
def play_game():
    coins = [Coin() for _ in range(3)]
    denominations = [1, 2, 5]
    balance = 0

    while balance < 20:
        for i, coin in enumerate(coins):
            coin.throw()
            if coin.side == 'Heads':
                balance += denominations[i]

        if balance == 20:
            print("You won!")
            return 'win'
        elif balance > 20:
            print("You lost!")
            return 'loss'

    return None


def main():
    print("Symulacja 15 rzutów monetą:")
    simulate_fifteen_flips()
    print("---------------------------------------")

    wins = 0
    losses = 0
    num_trials = 100

    for i in range(num_trials):
        result = play_game()
        if result == 'win':
            wins += 1
        elif result == 'loss':
            losses += 1

    print(f"Number of wins: {wins}")
    print(f"Number of losses: {losses}")


if __name__ == '__main__':
    main()
