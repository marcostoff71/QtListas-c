#include "lista.h"
#include <iostream>
using namespace std;

Lista::Lista()
{
    this->raiz=nullptr;
}

int Lista::count(){
    int con=0;
    for(Nodo* aux=raiz;aux!=nullptr;aux=aux->sig){
        con++;
    }

    return con;
}
void Lista::Agregar(int item){
    Nodo* nuevo= new Nodo;
    nuevo->dato=item;
    nuevo->sig=nullptr;

    if(raiz==nullptr){
        raiz=nuevo;
    }else{
        Nodo* aux=raiz;

        while(aux->sig!=nullptr){
            aux=aux->sig;
        }
        aux->sig=nuevo;
    }
}
void Lista::AgregarEn(int index,int item){
    if(index<0||index>count()-1){
     return;
    }

    Nodo* nuevo= new Nodo;
    nuevo->dato=item;
    nuevo->sig=nullptr;
    if(index==0){
        nuevo->sig=raiz;
        raiz=nuevo;
    }else{

        Nodo *reco=raiz;
        Nodo* ant=nullptr;

        for(int i=0;i<=index;i++){
            ant=reco;
            reco=reco->sig;

        }

        ant->sig=nuevo;
        nuevo->sig=reco;
    }

}
bool Lista::vacia(){
    return raiz==nullptr;
}
void Lista::Mostrar(){
    Nodo* aux=raiz;
    while (aux!=nullptr) {

        cout<<aux->dato;
        aux=aux->sig;
        if(aux==nullptr){
            cout<<endl;
        }else{
            cout<<",";
        }

    }
}
void Lista::EliminarEn(int index){
    if((index<0||index>count()-1)&&!vacia()){
     return;
    }

    if(index==0){
        raiz=raiz->sig;
    }else{
        Nodo *reco=raiz;
        Nodo* ant=nullptr;

        for(int i=0;i<index;i++){
            ant=reco;
            reco=reco->sig;

        }

        ant->sig=reco->sig;
    }

}
void Lista::Eliminar(int item){
    if(raiz!=nullptr){
        Nodo *reco=raiz;
        Nodo* ant=nullptr;


        while(reco!=nullptr&&reco->dato!=item){
            ant=reco;
            reco=reco->sig;
        }

        if(reco==nullptr){

        }else if(ant==nullptr){
            this->raiz=raiz->sig;
        }else{
            ant->sig=reco->sig;
        }

    }
}
