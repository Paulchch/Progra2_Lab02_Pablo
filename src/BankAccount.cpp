//
// Created by pabli on 25/3/2022.
//

#include "BankAccount.h"

BankAccount::BankAccount(int bankNumber) : bankNumber(bankNumber) {}

BankAccount::~BankAccount() {

}

int BankAccount::getBankNumber() const {
    return bankNumber;
}

void BankAccount::setBankNumber(int bankNumber) {
    BankAccount::bankNumber = bankNumber;
}

std::ostream &operator<<(std::ostream &os, const BankAccount &account) {
    os << "bankNumber: " << account.bankNumber;
    return os;
}
