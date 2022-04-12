//
// Created by beloin on 10/04/2022.
//

#include <iostream>
#include <decorators/ColoredBottleDecorator.h>
#include <decorators/PlastifiedBottle.h>
#include "DefaultBottle.h"

void cout_bottle(BottleProtocol *bottle, string *b);

using namespace std;

int main() {
    cout << "Get your bottle:\n";
    auto *bottleC = new string;

    auto b1 = new DefaultBottle();
    cout << "Here's your DefaultBottle:\n";
    cout_bottle(b1, bottleC);

    auto decoratedBottle = new ColoredBottleDecorator(b1, "Pink");
    cout << "Here's your Colored DefaultBottle:\n";
    cout_bottle(decoratedBottle, bottleC);

    auto plasticizedB = new PlastifiedBottle(decoratedBottle);
    cout << "Here's your Plasticized DefaultBottle:\n";
    cout_bottle(plasticizedB, bottleC);

    auto anotherColor = new ColoredBottleDecorator(plasticizedB, "Blue");
    cout << "Here's your Colored Plasticized DefaultBottle:\n";
    cout_bottle(anotherColor, bottleC);

    auto anotherColorInColor = new ColoredBottleDecorator(anotherColor, "Yellow");
    cout << "Here's your Colored Colored Plasticized DefaultBottle:\n";
    cout_bottle(anotherColorInColor, bottleC);

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
