//
// Created by beloin on 11/04/2022.
//

#ifndef DECORATOR_PLASTIFIEDBOTTLE_H
#define DECORATOR_PLASTIFIEDBOTTLE_H

#include "BottleDecorator.h"

class PlastifiedBottle : public BottleDecorator {

public:
    PlastifiedBottle(BottleProtocol *b): BottleDecorator(b){}

private:
    double default_multiplier = 1.5;

public:
    void getName(string *str) override;
    void getPrice(double *pr) override;
    void buildAttributes(string *str) override;
};


#endif //DECORATOR_PLASTIFIEDBOTTLE_H
