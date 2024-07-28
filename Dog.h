#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    void Voice() const override {
        std::cout << "Woof!" << std::endl;
    }
};

#endif
