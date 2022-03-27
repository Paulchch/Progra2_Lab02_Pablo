//
// Created by pabli on 26/3/2022.
//
/*
 * Clase Interfaz IWorkingFromOffice
 * */
#ifndef PROGRA2_LAB02_PABLO_IWORKINGFROMOFFICE_H
#define PROGRA2_LAB02_PABLO_IWORKINGFROMOFFICE_H
#include<iostream>

using namespace std;

class IWorkingFromOffice {
public:
    virtual string returnOfficeAddress() = 0; //metodo virtual puro

    virtual ~IWorkingFromOffice();
};


#endif //PROGRA2_LAB02_PABLO_IWORKINGFROMOFFICE_H
