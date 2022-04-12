//
// Created by beloin on 11/04/2022.
//

#include "StampedBottleDecorator.h"

void StampedBottleDecorator::getName(string *str){
    *str = "Stamped Bottle";
}

void StampedBottleDecorator::getPrice(double *pr) {
    this->bottle->getPrice(pr);
    *pr = *pr * default_multiplier;
}

void StampedBottleDecorator::buildAttributes(string *str) {
    this->bottle->buildAttributes(str);
    *str += "\n\tStamp: " + this->st_name;
}