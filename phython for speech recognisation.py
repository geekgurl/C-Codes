import pyttsx3 as p
import speech_recognition as sr
import pyaudio #https://www.lfd.uci.edu/~gohlke/pythonlibs/
engine=p.init()
rate=engine.getProperty('rate')
engine.setProperty('rate',170)
voices=engine.getProperty('voices')
engine.setProperty('voice',voices[1].id)


engine.say("hello there i am your voice assistant")
engine.runAndWait()


r=sr.Recognizer()

with sr.Microphone() as source:
    #r.energy_threshold=10000
    '''r.adjust_for_ambient_noise(source,1.2)'''
    print("listening")
    audio = r.listen(source)
    text=r.recognize_google(audio)
    print(text)
    speak(text)
    