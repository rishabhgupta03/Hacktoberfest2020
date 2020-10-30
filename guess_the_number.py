import random
print("*****GUESS THE NUMBER*****")
attemptsList= []
def score():
    if len(attemptsList) <= 0:
        print("There is currently no high score, it's yours for the taking!")
    else:
        print("High score is {} attempts".format(min(attemptsList)))
def startGame():
    randomNumber = int(random.randint(1, 10))
    print("Welcome buddy!")
    playerName = input("Your name? ")
    play = input("Hi, {}!! Let's start? (Enter Yes/No) ".format(playerName))
    attempts = 0
    score()
    print("Happy Guessing:)")
    while play.lower() == "yes":
        try:
            guess = input("Pick a number between 1 and 10 ")
            if int(guess) < 1 or int(guess) > 10:
                raise ValueError("Guess within the range, ok?")
            if int(guess) == randomNumber:
                print("Kudos!! You Won!")
                attempts += 1
                attemptsList.append(attempts)
                print("It took you {} attempts".format(attempts))
                playAgain = input("Would you like to play again? (Enter Yes/No) ")
                attempts = 0
                score()
                randomNumber = int(random.randint(1, 10))
                if playAgain.lower() == "no":
                    print("That's cool, have a good one!")
                    break
            elif int(guess) > randomNumber:
                print("It's lower")
                attempts += 1
            elif int(guess) < randomNumber:
                print("It's higher")
                attempts += 1
        except ValueError as err:
            print("Oh no! Try again...")
            print("({})".format(err))
    else:
        print("That's cool, have a good one!")
if __name__ == '__main__':
    startGame()
    
