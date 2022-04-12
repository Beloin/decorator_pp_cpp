//
// Created by beloin on 11/04/2022.
//

#ifndef DECORATOR_STAMPEDBOTTLEDECORATOR_H
#define DECORATOR_STAMPEDBOTTLEDECORATOR_H

#include "BottleDecorator.h"

class StampedBottleDecorator : public BottleDecorator {

public:
    StampedBottleDecorator(BottleProtocol *p, string stamp_name) : BottleDecorator(p) {
        st_name = stamp_name;
    }

    void getName(string *str) override;
    void getPrice(double *pr) override;
    void buildAttributes(string *str) override;

private:
    string st_name;
    double default_multiplier = 1.8;
};


#endif //DECORATOR_STAMPEDBOTTLEDECORATOR_H
