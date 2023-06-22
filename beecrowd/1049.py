clas = str(input())
if clas in 'vertebrado':
    clas = str(input())
    if clas in 'ave':
        clas = str(input())
        if clas in 'carnivoro':
            animal = 'aguia'
        elif clas in 'onivoro':
            animal = 'pomba'
    elif clas in 'mamifero':
        clas = str(input())
        if clas in 'herbivoro':
            animal = 'vaca'
        elif clas in 'onivoro':
            animal = 'homem'
elif clas in 'invertebrado':
    clas = str(input())
    if clas in 'inseto':
        clas = str(input())
        if clas in 'hematofago':
            animal = 'pulga'
        elif clas in 'herbivoro':
            animal = 'lagarta'
    elif clas in 'anelideo':
        clas = str(input())
        if clas in 'hematofago':
            animal = 'sanguessuga'
        elif clas in 'onivoro':
            animal = 'minhoca'
print(animal)
