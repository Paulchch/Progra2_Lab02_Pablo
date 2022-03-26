//
// Created by pabli on 23/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_ADDRESS_H
#define PROGRA2_LAB02_PABLO_ADDRESS_H
#include<iostream>
/*
 * Class name
Access control (private, public, protected) :)
Constructors (base, with parameters) :)
Properties :)
Destructors :)
Get/Set methods :)
to string representation :)
*/

using namespace std;

class Address {

private:
    string type;
    string address;
public:
    Address(const string &type, const string &address);

    Address();

    const string &getType() const;

    void setType(const string &type);

    const string &getAddress() const;

    void setAddress(const string &address);

    virtual ~Address();

    friend ostream &operator<<(ostream &os, const Address &address);

};


#endif //PROGRA2_LAB02_PABLO_ADDRESS_H
