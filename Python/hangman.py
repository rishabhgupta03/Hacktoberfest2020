import random
from words import words_list
#Create a words.py file(same directory) which includes a list of words that the game uses.
#Name the list variable as words_list.

#Further commenting is not necessary as the code is self explanatory.

def get_word():
    word = random.choice(words_list)
    return word

def play(word):
    word_completion = "_" *len(word)
    guessed = False
    guessed_letters = []
    guessed_words = []
    tries = 6
    print("Lets's play hangman")
    print(display_board(tries))
    print(word_completion)
    print("\n")
    print("Number of words in the letter: ", len(word))
    print("\n")
    while not guessed and tries>0:
        guess = input("Please guess the word/letter: ").upper()
        if len(guess) == 1 and guess.isalpha():
            if guess in guessed_letters:
                print("You already guessed it.", guess)
            elif guess not in word:
                print(guess, " is not in the word")
                tries -=1
                guessed_letters.append(guess)
            else:
                print("Nice guess ",guess, " is in the word")
                guessed_letters.append(guess)
                word_as_list = list(word_completion)
                indices = [i for i, letter in enumerate(word) if letter == guess]
                for index in indices:
                    word_as_list[index] = guess
                word_completion = "".join(word_as_list)
                if "_" not in word_completion:
                    guessed = True

        elif len(guess) == len(word) and guess.isalpha():
            if guess in guessed_words:
                print("You already guessed the word ",word)
            elif guess != word:
                print("Wrong guess")
                tries -= 1
                guessed_words.append(guess)
            else:
                guessed = True
                word_completion = word

        else:
            print("Not a valid guess")

        print(display_board(tries))
        print(word_completion)
        print("\n")

    if guessed:
        print("Congrats, you guessed it right")
    else:
        print("Sorry, you ran out of tries. Better luck next time")
        print("The word was " ,word)    


def display_board(tries):
    stages = [

        """   
             --------------
             |            |
             |          __O__
             |            |
             |           / \ 
             |
             |
        """,
                """   
             --------------
             |            |
             |          __O__
             |            |
             |           /  
             |
             |
        """,
                """   
             --------------
             |            |
             |          __O__
             |            |
             |            
             |
             |
        """,
                """   
             --------------
             |            |
             |          __O
             |            |
             |            
             |
             |
        """,
        """
                  
             --------------
             |            |
             |            O
             |            |
             |            
             |
             |
        """,
                """   
             --------------
             |            |
             |            O
             |          
             |            
             |
             |
        """,
                """   
             --------------
             |            |
             |          
             |           
             |           
             |
             |
        """
             ]

    return stages[tries] 


def main():
    word = get_word()
    play(word)
    while input("Play again? (Y/N) ").upper()== 'Y':
        word = get_word()
        play(word)

if __name__ == "__main__":
    main()
