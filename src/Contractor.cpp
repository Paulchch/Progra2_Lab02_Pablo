//
// Created by pabli on 26/3/2022.
//

#include "Contractor.h"


Contractor::Contractor(int employeeId, int jobId, float paymentPerHour, int fixedHours) : Employee(employeeId, jobId,
                                                                                                   paymentPerHour),
                                                                                          fixedHours(fixedHours) {}

float Contractor::calculateSalary() {
    return 0;
}

Contractor::~Contractor() {

}

int Contractor::getFixedHours() const {
    return fixedHours;
}

void Contractor::setFixedHours(int fixedHours) {
    Contractor::fixedHours = fixedHours;
}

ostream &operator<<(ostream &os, const Contractor &contractor) {
    os << static_cast<const Employee &>(contractor) << " fixedHours: " << contractor.fixedHours;
    return os;
}

Contractor::Contractor() {
    fixedHours = 0;
}

string Contractor::returnOfficeAddress() {
    return "Sin definir";
}

string Contractor::returnHomeAddress() {
    return "Sin definir";
}
