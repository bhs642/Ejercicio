#ifndef PILA_H
#define PILA_H
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
#include"Listado.h"

using namespace std;

class Pila{
    private:
        Lista libro;
    public:
        Pila();
        void push(Lista);
        Lista pop(Lista);
        int noempty();
};


#endif // PILA_H
