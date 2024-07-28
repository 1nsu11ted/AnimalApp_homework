#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

int main() {
    const int numAnimals = 3;
    Animal* animals[numAnimals];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < numAnimals; ++i) {
        animals[i]->Voice();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}
