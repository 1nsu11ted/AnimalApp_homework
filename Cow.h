#ifndef COW_H
#define COW_H

#include "Animal.h"

class Cow : public Animal {
public:
    void Voice() const override {
        std::cout << "Moo!" << std::endl;
    }
};

#endif
