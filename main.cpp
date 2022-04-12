//
// Created by beloin on 10/04/2022.
//

#include <iostream>
#include <decorators/ColoredBottleDecorator.h>
#include <decorators/PlastifiedBottle.h>
#include <decorators/StampedBottleDecorator.h>
#include "DefaultBottle.h"

void cout_bottle(BottleProtocol *bottle, string *b);

using namespace std;

int main() {
    cout << "Get your bottle:\n";
    auto *bottleC = new string;
    BottleProtocol* bottle;

    bottle = new DefaultBottle();
    cout << "Here's your DefaultBottle:\n";
    cout_bottle(bottle, bottleC);

    bottle = new ColoredBottleDecorator(bottle, "Pink");
    cout << "Here's your Colored DefaultBottle:\n";
    cout_bottle(bottle, bottleC);

    bottle = new PlastifiedBottle(bottle);
    cout << "Here's your Plasticized DefaultBottle:\n";
    cout_bottle(bottle, bottleC);

    bottle = new ColoredBottleDecorator(bottle, "Blue");
    cout << "Here's your Colored Plasticized DefaultBottle:\n";
    cout_bottle(bottle, bottleC);

    bottle = new StampedBottleDecorator(bottle, "Cute Cat");
    cout << "Here's your Stamped DefaultBottle:\n";
    cout_bottle(bottle, bottleC);

    return 0;
}

void cout_bottle(BottleProtocol *bottle, string *b){
    bottle->buildBottle(b);
    cout << endl;
    cout << "===========================================" << endl;
    cout << *b << endl;
    cout << "===========================================" << endl;
    cout << endl;
}
