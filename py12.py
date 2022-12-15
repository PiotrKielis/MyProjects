import random
while True:
    user_action = input("Wprowadz swoj wybor(papier,kamien,nozyce): ")
    possible_actions = ["kamien", "papier", "nozyce"]
    computer_action = random.choice(possible_actions)
    print(f"\nWybrales {user_action}, wybor komputera {computer_action}.\n")


    if user_action == computer_action:
        print(f"Obydwoje graczy wybralo {user_action}. Mamy remis!")
    elif user_action == "kamien":
        if computer_action == "nozyce":
            print("Kamien wygrywa z nozycami! Wygrana!")
        else:
            print("Papier wygrywa z kamieniem! Porazka.")
    elif user_action == "papier":
        if computer_action == "kamien":
            print("Papier wygrywa z kamieniem! Wygrana!")
        else:
            print("Nozyce wygrywaja z papierem! Porazka.")
    elif user_action == "nozyce":
        if computer_action == "papier":
            print("Nozyce wygrywaja z papierem! Wygrana!")
        else:
            print("Kamien wygrywa z nozycami! Porazka.")

    play_again = input("Chcesz zagrac ponownie? (t/n): ")
    if play_again.lower() != "t":
        break
