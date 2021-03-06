//
// Created by pabli on 23/3/2022.
//

#ifndef PROGRA2_LAB02_PABLO_PERSON_H
#define PROGRA2_LAB02_PABLO_PERSON_H

#include<iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person() = default;
    Person(const string &name, int age);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    virtual ~Person();//destructor virtual generado

    friend ostream &operator<<(ostream &os, const Person &person);//funcion toString
};


#endif //PROGRA2_LAB02_PABLO_PERSON_H
