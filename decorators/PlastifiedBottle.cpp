//
// Created by beloin on 11/04/2022.
//

#include "PlastifiedBottle.h"

void PlastifiedBottle::getPrice(double *pr) {
    this->bottle->getPrice(pr);
    *pr = *pr * default_multiplier;
}

void PlastifiedBottle::getName(string *str) {
    *str = "Plasticized Bottle";
}

void PlastifiedBottle::buildAttributes(string *str) {
    this->bottle->buildAttributes(str);
    *str += "\n\tPlasticized!";
}