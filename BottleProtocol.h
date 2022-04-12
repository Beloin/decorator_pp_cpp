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
    void buildBottle(string *str){
        *str = "";
        this->getName(str);
        *str += "\n";

        *str += "\t";
        *str += "Price: ";
        auto p = new double;
        getPrice(p);
        *str += to_string(*p);

        // Build Its attributes
        this->buildAttributes(str);

        free(p);
    }

    /**
     * Build other than default attributes.
     * @param str
     *
     *  Attributes should concat str.
     *  Each attribute should be added line by line with one `\\t` indentation.
     */
    virtual void buildAttributes(string *str) {}
};


#endif //DECORATOR_BOTTLEPROTOCOL_H
