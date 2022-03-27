//
// Created by pabli on 26/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_CONTRACTOR_H
#define PROGRA2_LAB02_PABLO_CONTRACTOR_H

#include <ostream>
#include "Employee.h"
#include"IWorkingFromOffice.h"
#include"IWorkingFromHome.h"

class Contractor final :public Employee, public IWorkingFromOffice,public IWorkingFromHome{

private:
    int fixedHours;
public:
    Contractor() ; //parece que si hay que inicializar los miembros en contructor sin parametros

    Contractor(int employeeId, int jobId, float paymentPerHour, int fixedHours);

    float calculateSalary() override;

    ~Contractor() override;//ask for this

    int getFixedHours() const;

    void setFixedHours(int fixedHours);

    friend ostream &operator<<(ostream &os, const Contractor &contractor);

    string returnOfficeAddress() override;

    string returnHomeAddress() override;
    //sin definir
    //preguntar al profe si no es necesario poner virtual
    //-->hipotesis si la quiero seguir heredando, tengo que poner el virtual para sobreescribirla
};


#endif //PROGRA2_LAB02_PABLO_CONTRACTOR_H
