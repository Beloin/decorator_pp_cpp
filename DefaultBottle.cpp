//
// Created by beloin on 10/04/2022.
//

#include "DefaultBottle.h"
#include "string"

using namespace std;

void DefaultBottle::getName(string *str) {
    *str = name;
}

void DefaultBottle::getPrice(double *pr) {
    *pr = this->price;
}
