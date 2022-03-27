//
// Created by pabli on 26/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_FULLTIMEEMPLOYEE_H
#define PROGRA2_LAB02_PABLO_FULLTIMEEMPLOYEE_H

#include <ostream>
#include"Employee.h"
#include"IWorkingFromHome.h"

class FullTimeEmployee final :public Employee, public IWorkingFromHome {
private:
    int workingHours;
public:
    FullTimeEmployee(int employeeId, int jobId, float paymentPerHour, int workingHours);

    FullTimeEmployee();

    float calculateSalary() override;

    string returnHomeAddress() override;

     ~FullTimeEmployee() override; //preguntar que tal destructor con override en vez de virtual
    int getWorkingHours() const;

    void setWorkingHours(int workingHours);

    friend ostream &operator<<(ostream &os, const FullTimeEmployee &employee);
};


#endif //PROGRA2_LAB02_PABLO_FULLTIMEEMPLOYEE_H
