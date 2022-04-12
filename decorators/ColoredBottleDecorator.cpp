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

void ColoredBottleDecorator::buildAttributes(string *str) {
    this->bottle->buildAttributes(str);
    *str += "\n\tColor: " + this->color;
}

