# To print the multiplication table of any number, where number is entered by the user using for loop.

# take a number from user and store it num variable
num = int(input("Enter the no : "))

# start a for loop 1 to 10 to print the tables.
for i in range (1,11):
    print(num, 'x', i, '=', num*i)
