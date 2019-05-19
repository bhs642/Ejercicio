#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<stdio.h>
#include<string.h>
#include"Listado.h"
#include"Pila.h"
#include"Cola.h"

using namespace std;

Lista crearnodo(Lista a,string aut,string titul,int paginas){
    a=NULL;
    a=new (Nodo);
    a->Autor=aut;
    a->titulo=titul;
    a->Numerodepaginas=paginas;
    a->link=NULL;
    return a;
}

Lista vacia(Lista a){
    a=NULL;
    a=new (Nodo);
    a->Autor="";
    a->titulo="";
    a->Numerodepaginas=0;
    a->link=NULL;
    return a;
}

int noempty(Lista p){
    if(p==NULL){
        return 0;
    }
    else return 1;
}

void ordenarmislecturaspila(Pila a){
    Lista pa;
    Lista paux;
    Lista aux;
    pa=NULL;
    paux=NULL;
    aux=NULL;
    aux=vacia(aux);
    paux=vacia(paux);
    pa=vacia(pa);
    while(a.noempty()!=0){
        pa=a.pop(pa);
        if(pa->Numerodepaginas<=paux->Numerodepaginas){
            pa->link=paux;
            paux=pa;
        }
        else{
            aux=paux;
            while(aux->link!=NULL && aux->link->Numerodepaginas<=pa->Numerodepaginas){
            aux=aux->link;
            }
            pa->link=aux->link;
            aux->link=pa;
            paux=pa;
        }
        cout<<paux->titulo<<"\n"<<paux->Autor<<"\n"<<paux->Numerodepaginas<<"\n"<<endl;
    }
    while(noempty(paux)!=0){
        a.push(paux);
        paux=paux->link;
    }
    system("pause");
    system("cls");
}

void vaciarvector(livro a[30]){
    int i=0;
    for(i=0;i<=30;i++){
        a[i].Autor="";
        a[i].Numerodepaginas=0;
        a[i].titulo="";
    }
}

void vaciarlibro(livro a){
    a.Autor="";
    a.Numerodepaginas=0;
    a.titulo="";
}

void ordenarmislecturascola(Cola b[30]){
    int c=0,i=0,j=0;
    livro auy;
    livro aux;
    livro regresar;
    livro al[30];
    livro auxiliar[30];
    vaciarvector(al);
    vaciarvector(auxiliar);
    vaciarlibro(auy);
    vaciarlibro(aux);
    vaciarlibro(regresar);

    while(b[c].novacio(c)!=0){
        auy=b[c].extraer(auy,c);
        auxiliar[c].Autor=auy.Autor;
        auxiliar[c].Numerodepaginas=auy.Numerodepaginas;
        auxiliar[c].titulo=auy.titulo;
        c++;
        }
        for(i=0; i<=30;++i){
            for(j=i+1; j<=29;++j){
                if(auxiliar[i].Numerodepaginas<auxiliar[j].Numerodepaginas){
                    aux.Autor=auxiliar[j].Autor;
                    aux.Numerodepaginas=auxiliar[j].Numerodepaginas;
                    aux.titulo=auxiliar[j].titulo;
                    auxiliar[j].Autor=auxiliar[i].Autor;
                    auxiliar[j].Numerodepaginas=auxiliar[i].Numerodepaginas;
                    auxiliar[j].titulo=auxiliar[i].titulo;
                    auxiliar[i].Autor=aux.Autor;
                    auxiliar[i].Numerodepaginas=aux.Numerodepaginas;
                    auxiliar[i].titulo=aux.titulo;
                }
            }
        }
        c--;
        while(c!=-1){
            regresar.Autor=auxiliar[c].Autor;
            regresar.titulo=auxiliar[c].titulo;
            regresar.Numerodepaginas=auxiliar[c].Numerodepaginas;
            cout<<"El autor se llama  "<<regresar.Autor<<" del libro "<<regresar.titulo<<" que tiene "<<regresar.Numerodepaginas<<" Paginas"<<endl;
            cout<<"\n"<<endl;
            b[c].agregar(regresar,i);
            c--;
            i++;
        }
        cout<<"Los datos han vuelto"<<endl;
        system("pause");
        system("cls");
}


int main(){
    int a=1,b=0,numero=0,contador=0;
    string autor,libro;
    Lista inicial;
    Pila bodega;
    Cola libreria[30];
    livro n;
    while(a==1){
            cout<<"Si desea crear un libro dentro de una Pila presione 1 \n"<<endl;
            cout<<"Si desea crear un libro dentro de una Cola presione 2 \n"<<endl;
            cout<<"Si desea ordenar la Pila presione 3 \n"<<endl;
            cout<<"Si desea ordenar la Cola presione 4 \n"<<endl;
            cout<<"Si desea salir presione 5 \n"<<endl;
            cin>>b;
            if(b==1){
                system("cls");
                cout<<"Nombre del autor \n"<<endl;
                cin>>autor;
                cout<<"Nombre del libro \n"<<endl;
                cin>>libro;
                cout<<"Numero de paginas \n"<<endl;
                cin>>numero;
                inicial=crearnodo(inicial,autor,libro,numero);
                bodega.push(inicial);
                system("cls");
            }
            if(b==2){
                system("cls");
                cout<<"Nombre del autor \n"<<endl;
                cin>>autor;
                cout<<"Nombre del libro \n"<<endl;
                cin>>libro;
                cout<<"Numero de paginas \n"<<endl;
                cin>>numero;
                n.Autor=autor;
                n.Numerodepaginas=numero;
                n.titulo=libro;
                libreria[contador].agregar(n,contador);
                //cout<<"Estamos aqui"<<endl;
                contador++;
                system("cls");
            }
            if(b==3){
                system("cls");
                ordenarmislecturaspila(bodega);
            }
            if(b==4){
                system("cls");
                ordenarmislecturascola(libreria);
            }
            if(b==5){
                break;
                system("cls");
            }

    }
    return 0;
}
