#include <iostream>
#include <thread>
#include <fstream>

using namespace std;

void myfun(int nlineas){
    /*
    funcion
    */
    ofstream ourFile("ourfile.txt");
    for(int i = 0; i < nlineas;i++ ){
        ourFile << "Sistemas Operativos 1" << endl;
    }
    ourFile.close();

}

int main(){
    /*
    intro
    */
    int nLineas = 0;
    cout << "Ingrese numero de veces a imprimir la frase:";
    cin >> nLineas;
    cout << "Numero de lineas:" << nLineas << endl;

    /*
    creacion del hilo
    */
    thread hilo1(myfun,nLineas);

    hilo1.join();

    return 0;
}













/*
ejercicio 1
dorian - intro
michael -  creacion del hilo (thread) 
amy - funcion
*/

/*
ejercicio 2
keren
oscar 
david
Roberto
*/
