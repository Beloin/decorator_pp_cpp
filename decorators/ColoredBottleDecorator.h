//
// Created by beloin on 11/04/2022.
//

#ifndef DECORATOR_COLOREDBOTTLEDECORATOR_H
#define DECORATOR_COLOREDBOTTLEDECORATOR_H

#include "BottleDecorator.h"

#include <utility>
#include "DefaultBottle.h"

class ColoredBottleDecorator : public BottleDecorator {
public:
    ColoredBottleDecorator(BottleProtocol *bottle, string color) : BottleDecorator(bottle) {
        this->color = std::move(color);
    }

private:
    string color;
    double default_multiplier = 1.2;

public:
    void getPrice(double *pr) override;
    void getName(string *str) override;
    void buildAttributes(string *str) override;
};


#endif //DECORATOR_COLOREDBOTTLEDECORATOR_H
