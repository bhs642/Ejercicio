#ifndef LISTADO_H_INCLUDED
#define LISTADO_H_INCLUDED
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<string.h>

using namespace std;

typedef struct Nodo{
    string titulo;
    string Autor;
    int Numerodepaginas;
    struct Nodo *link;
}Nodo;

typedef Nodo *Lista;

typedef struct livro{
    string titulo;
    string Autor;
    int Numerodepaginas;
}livro;

#endif // LISTADO_H_INCLUDED
