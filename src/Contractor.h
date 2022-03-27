//
// Created by pabli on 26/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_CONTRACTOR_H
#define PROGRA2_LAB02_PABLO_CONTRACTOR_H
#include "Employee.h"

class Contractor:public Employee {

private:
    int fixedHours;
public:
    Contractor() = default;

    Contractor(int employeeId, int jobId, float paymentPerHour, int fixedHours);

    float calculateSalary() override; //preguntar al profe si no es necesario poner virtual
    //-->hipotesis si la quiero seguir heredando, tengo que poner el virtual para sobreescribirla
};


#endif //PROGRA2_LAB02_PABLO_CONTRACTOR_H
