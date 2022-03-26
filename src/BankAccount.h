//
// Created by pabli on 25/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_BANKACCOUNT_H
#define PROGRA2_LAB02_PABLO_BANKACCOUNT_H

#include <ostream>

/*
 * Class name
Access control (private, public, protected) :)
Constructors (base, with parameters) :)
Properties :)
Destructors :)
Get/Set methods :)
to string representation :)
*/

class BankAccount {
public:
    BankAccount(int bankNumber);
    BankAccount() = default; //preguntar si cuenta como constructor sin parametros

    virtual ~BankAccount();

    int getBankNumber() const;

    void setBankNumber(int bankNumber);

    friend std::ostream &operator<<(std::ostream &os, const BankAccount &account);


private:
    int bankNumber;
public:

};


#endif //PROGRA2_LAB02_PABLO_BANKACCOUNT_H
