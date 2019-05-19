#include "Cola.h"
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
#include"Listado.h"

using namespace std;

Cola::Cola(){
}

void Cola::agregar(const livro b,int x){
    almacen[x].Autor=b.Autor;
    almacen[x].Numerodepaginas=b.Numerodepaginas;
    almacen[x].titulo=b.titulo;

}

livro Cola::extraer(livro b,int x){
    b.Autor=almacen[x].Autor;
    b.Numerodepaginas=almacen[x].Numerodepaginas;
    b.titulo=almacen[x].titulo;
    almacen[x].Autor="";
    almacen[x].titulo="";
    almacen[x].Numerodepaginas=0;
    return b;
}


int Cola::novacio(int x){
    if(almacen[x].Numerodepaginas==0){
        return 0;
    }
    else return 1;
}

