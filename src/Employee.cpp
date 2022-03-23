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
