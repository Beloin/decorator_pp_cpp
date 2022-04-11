//
// Created by beloin on 10/04/2022.
//

#ifndef DECORATOR_BOTTLEDECORATOR_H
#define DECORATOR_BOTTLEDECORATOR_H

#include <BottleProtocol.h>
#include "string"

using namespace std;

class BottleDecorator : public BottleProtocol {

protected:
    explicit BottleDecorator(BottleProtocol *bt) {
        this->bottle = bt;
    }
    BottleProtocol *bottle;
};

#endif //DECORATOR_BOTTLEDECORATOR_H
