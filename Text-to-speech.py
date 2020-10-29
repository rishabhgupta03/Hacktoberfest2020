'''
python programfor convert text to speech
gTTS = Google Text to Speech
'''
from gtts import gTTS
import os

#Pyhton program for change text to speech
sampletext = input("Enter your text here : ")
language = 'en'

engine = gTTS(text = sampletext, lang= language, slow= False)

#FIle Be Saved in same folder 
engine.save('welcome1.mp3')
