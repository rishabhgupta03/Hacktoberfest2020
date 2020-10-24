import exrex
import re 
from termcolor import colored

change_password=True
while change_password==True:
    passwd=exrex.getone('[A-Za-z0-9]{10}',10)
    print(colored("---------------------------------","magenta"))
    print("your password is:"+colored(passwd,"green"))
    print(colored("---------------------------------","magenta"))
    
   
    
    user_opinion=int(input("would you like to get other password?\n1. yes\n2. no\n"))
             

    
    if user_opinion==1:
        continue
    elif user_opinion==2:
        change_password=False
        break
    
    
    



