//
// Created by beloin on 11/04/2022.
//

#ifndef DECORATOR_BOTTLEPROTOCOL_H
#define DECORATOR_BOTTLEPROTOCOL_H
#include "string"

using namespace std;

class BottleProtocol {
public:
    virtual void getName(string *str) = 0;
    virtual void getPrice(double *pr) = 0;
    virtual void buildBottle(string *str) {
        auto n = new string;
        getName(n);
        *str = *n + ":" + "\n\t" + "Price: ";
        auto p = new double;
        getPrice(p);
        *str += to_string(*p);
        // Check this:
        free(n);
        free(p);
    }
};


#endif //DECORATOR_BOTTLEPROTOCOL_H
