//
// Created by pabli on 23/3/2022.
//

#include "Employee.h"

Employee::Employee(int employeeId, int jobId, float paymentPerHour) : employeeId(employeeId), jobId(jobId),
                                                                      paymentPerHour(paymentPerHour) {}

int Employee::getEmployeeId() const {
    return employeeId;
}

void Employee::setEmployeeId(int employeeId) {
    Employee::employeeId = employeeId;
}

int Employee::getJobId() const {
    return jobId;
}

void Employee::setJobId(int jobId) {
    Employee::jobId = jobId;
}

float Employee::getPaymentPerHour() const {
    return paymentPerHour;
}

void Employee::setPaymentPerHour(float paymentPerHour) {
    Employee::paymentPerHour = paymentPerHour;
}
Employee::~Employee(){
    delete(bankAccount);
}

BankAccount *Employee::getBankAccount() const {
    return bankAccount;
}

void Employee::setBankAccount(BankAccount *bankAccount) {
    Employee::bankAccount = bankAccount;
}

const vector<Address *> &Employee::getAddressList() const {
    return addressList;
}

void Employee::setAddressList(const vector<Address *> &addressList) {
    Employee::addressList = addressList;
}
