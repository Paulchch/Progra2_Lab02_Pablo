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
