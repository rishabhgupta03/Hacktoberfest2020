#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
@author: darshasawa
"""
phrase = input("Please enter the phrase: ")
key = input("Enter the key: ")
phrase = phrase.upper()
key=key.upper()
key_length = len(key)

encrypt_phrase = ""
for i in range(len(phrase)):
    value =(ord(phrase[i])+ord(key[(i%key_length)]))%26
    encrypt_phrase+=chr(value+65)
    
print("\n"+encrypt_phrase)


