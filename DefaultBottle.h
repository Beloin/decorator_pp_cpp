//
// Created by beloin on 10/04/2022.
//

#ifndef DECORATOR_DEFAULTBOTTLE_H
#define DECORATOR_DEFAULTBOTTLE_H

#include "string"
#include "BottleProtocol.h"

using namespace std;

class DefaultBottle : public BottleProtocol {

private:
    string name;
    double price;

public:
    explicit DefaultBottle(){
        this->name = "Default Bottle";
        this->price = 12.0;
    }

    void getName(string *str) override;

    void getPrice(double *pr) override;
};


#endif //DECORATOR_DEFAULTBOTTLE_H
