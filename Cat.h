#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    void Voice() const override {
        std::cout << "Meow!" << std::endl;
    }
};

#endif
