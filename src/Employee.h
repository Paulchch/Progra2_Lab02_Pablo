//
// Created by pabli on 23/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_EMPLOYEE_H
#define PROGRA2_LAB02_PABLO_EMPLOYEE_H
#include"Person.h"
#include "Address.h"

class Employee : public Person {
private:
    int employeeId;
    int jobId;
    float paymentPerHour;
    //BankAccount bankAccount; 1.Same with this
    //Address addresList[]* |vector(standad_library)
public:
    Employee() = default;
    Employee(int employeeId, int jobId, float paymentPerHour);

    virtual float calculateSalary() = 0;

    int getEmployeeId() const;

    void setEmployeeId(int employeeId);

    int getJobId() const;

    void setJobId(int jobId);

    float getPaymentPerHour() const;

    void setPaymentPerHour(float paymentPerHour); //pure virtual

    virtual ~Employee() = default;
};


#endif //PROGRA2_LAB02_PABLO_EMPLOYEE_H
