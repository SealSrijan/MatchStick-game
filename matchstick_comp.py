def matchstick_game():
    print("Welcome to the MATCHSTICK GAME.\n")
    ans = input("Do you want to play? (y/n): ").strip().lower()

    if ans == 'y':
        print("\n\nRules for the game are as follows:")
        print("1. There are 21 matchsticks.")
        print("2. You are allowed to pick (choose) only 1, 2, 3, or 4 matchsticks at a time.\n")
        name = input("Enter your name: ").strip()
        input("\nPress Enter to play.")
        
        matchstick = 21

        while matchstick > 1:
            print(f"\n\nRemaining matchsticks: {matchstick}")
            try:
                user_pick = int(input(f"{name}: "))
            except ValueError:
                print("Invalid Input. Please enter a number between 1 and 4.")
                continue

            while user_pick < 1 or user_pick > 4:
                print("Invalid Input. Choose 1, 2, 3, or 4 matchsticks.")
                try:
                    user_pick = int(input(f"{name}: "))
                except ValueError:
                    print("Invalid Input. Please enter a number between 1 and 4.")
                    continue

            matchstick -= user_pick
            if matchstick <= 1:
                break

            comp_pick = 5 - user_pick
            print(f"System: {comp_pick}")
            matchstick -= comp_pick

        print("\n\nRemaining matchstick: 1.")
        print("You pick the last one.")
        print("\nSystem wins! You lose.")
    elif ans == 'n':
        print("Bad choice. Sad to see you go!")
    else:
        print("Wrong choice.")

if __name__ == "__main__":
    matchstick_game()