//
// Created by beloin on 10/04/2022.
//

#include <iostream>
#include <decorators/ColoredBottleDecorator.h>
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
    decoratedBottle->buildBottle(bottleC);
    cout << "Here's your Colored DefaultBottle:\n";
    cout_bottle(decoratedBottle, bottleC);

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
