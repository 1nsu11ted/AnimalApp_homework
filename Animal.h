#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public:
    virtual void Voice() const {
        std::cout << "Some generic animal sound" << std::endl;
    }

    virtual ~Animal() = default;
};

#endif
