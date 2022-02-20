import random as rd
b=rd.randint(1,100)
a=1
while a != b:
    a=int(input("What is your guess?"))
    if a>b:
        print("Too high")
    elif a<b:
        print("Too low")
print('Correct!')fdsadasdsa