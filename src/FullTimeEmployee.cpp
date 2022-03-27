//
// Created by pabli on 26/3/2022.
//

#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(int employeeId, int jobId, float paymentPerHour, int workingHours) : Employee(
        employeeId, jobId, paymentPerHour), workingHours(workingHours) {}

FullTimeEmployee::FullTimeEmployee() {
    workingHours = 0;
}

float FullTimeEmployee::calculateSalary() {
    return 0;
}

string FullTimeEmployee::returnHomeAddress() {
    return "Sin definir";
}

FullTimeEmployee::~FullTimeEmployee() {

}

int FullTimeEmployee::getWorkingHours() const {
    return workingHours;
}

void FullTimeEmployee::setWorkingHours(int workingHours) {
    FullTimeEmployee::workingHours = workingHours;
}

ostream &operator<<(ostream &os, const FullTimeEmployee &employee) {
    os << static_cast<const Employee &>(employee) << ' ' << static_cast<const IWorkingFromHome &>(employee)
       << " workingHours: " << employee.workingHours;
    return os;
}
