//
// Created by pabli on 23/3/2022.
//

#include "Address.h"

Address::Address(const string &type, const string &address) : type(type), address(address) {}

const string &Address::getType() const {
    return type;
}

void Address::setType(const string &type) {
    Address::type = type;
}

const string &Address::getAddress() const {
    return address;
}

void Address::setAddress(const string &address) {
    Address::address = address;
}

Address::~Address() {

}

ostream &operator<<(ostream &os, const Address &address) {
    os << "type: " << address.type << " address: " << address.address;
    return os;
}

Address::Address() = default; //preguntar si esto vale como constructor sin parametros
