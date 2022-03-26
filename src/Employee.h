//
// Created by pabli on 23/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_EMPLOYEE_H
#define PROGRA2_LAB02_PABLO_EMPLOYEE_H
#include<vector>
#include"Person.h"
#include "Address.h"
#include "BankAccount.h"

class Employee : public Person {
private:
    int employeeId;
    int jobId;
    float paymentPerHour;
    BankAccount* bankAccount; //composicion(si se borra)-->se hizo puntero para poder borrarlo
    vector<Address*> addressList;//agregacion(no se borra)
public:
    Employee() = default;
    Employee(int employeeId, int jobId, float paymentPerHour);

    virtual float calculateSalary() = 0; //metodo virtual puro, se define en clases hijas

    int getEmployeeId() const;

    void setEmployeeId(int employeeId);

    int getJobId() const;

    void setJobId(int jobId);

    float getPaymentPerHour() const;

    void setPaymentPerHour(float paymentPerHour); //pure virtual

    virtual ~Employee();

    BankAccount *getBankAccount() const;

    void setBankAccount(BankAccount *bankAccount);

    const vector<Address *> &getAddressList() const;

    void setAddressList(const vector<Address *> &addressList);
};


#endif //PROGRA2_LAB02_PABLO_EMPLOYEE_H
