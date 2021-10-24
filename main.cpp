#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "lista.h"
using namespace std;

void muestraVector(vector<int>);

int main(int argc, char *argv[])
{

    Lista list;
    list.Agregar(1);
    list.Agregar(2);
    list.Agregar(3);
    list.Agregar(4);

    list.AgregarEn(0,20);
    list.AgregarEn(4,22);

    list.EliminarEn(5);

    list.Mostrar();
    QCoreApplication a(argc, argv);

    return a.exec();
}

void muestraVector(vector<int> vec){
    for (int a :  vec) {
        cout<<a<<endl;
    }
}
