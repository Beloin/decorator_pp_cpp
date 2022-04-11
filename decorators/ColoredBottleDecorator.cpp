//
// Created by beloin on 11/04/2022.
//

#include "ColoredBottleDecorator.h"

void ColoredBottleDecorator::getName(string *str) {
    *str = "Colored Bottle";
}

void ColoredBottleDecorator::getPrice(double *pr) {
    this->bottle->getPrice(pr);
    *pr = *pr * this->default_multiplier;
}

void ColoredBottleDecorator::buildBottle(string *str) {
    BottleDecorator::buildBottle(str);
    *str += "\n\tColor: " + this->color + "";
}