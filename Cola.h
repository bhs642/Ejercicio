#ifndef COLA_H
#define COLA_H
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
#include"Listado.h"

using namespace std;

class Cola{
    private:
        livro almacen[30];
    public:
        Cola();
        void agregar(const livro,int);
        livro extraer(livro,int);
        int novacio(int);
};

#endif // COLA_H
