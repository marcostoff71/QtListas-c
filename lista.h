#ifndef LISTA_H
#define LISTA_H


class Nodo{
public:
    int dato;
    Nodo* sig;
};

class Lista
{
private:
    Nodo* raiz;
public:
    Lista();
    int count();
    bool vacia();
    void Agregar(int item);
    void AgregarEn(int index,int item);
    void Eliminar(int item);
    void EliminarEn(int index);
    void Mostrar();
};

#endif // LISTA_H
