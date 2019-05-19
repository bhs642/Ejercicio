#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
#include"Listado.h"
#include "Pila.h"

Pila::Pila(){
    libro=0;
}

void Pila::push(Lista n){
        n->link=libro;
        libro=n;
}

Lista Pila::pop(Lista aux){
    Lista paux;
    paux=new (Nodo);
    paux=libro;
    aux->Autor=libro->Autor;
    aux->Numerodepaginas=libro->Numerodepaginas;
    aux->titulo=libro->titulo;
    libro=libro->link;
    delete paux;
    return aux;
}

int Pila::noempty(){
    if(libro==NULL){
        return 0;
    }
    else return 1;
}
