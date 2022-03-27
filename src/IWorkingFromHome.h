//
// Created by pabli on 26/3/2022.
//
/*
 * Clase Interfaz IWorkingFromHome
 * */
#ifndef PROGRA2_LAB02_PABLO_IWORKINGFROMHOME_H
#define PROGRA2_LAB02_PABLO_IWORKINGFROMHOME_H
#include<iostream>

using namespace std;

class IWorkingFromHome {
public:
    virtual string returnHomeAddress() = 0;
    virtual ~IWorkingFromHome();

};


#endif //PROGRA2_LAB02_PABLO_IWORKINGFROMHOME_H
