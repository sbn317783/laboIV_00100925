#include <iostream>
using namespace std;
int main(){

//Declarar variables
int number; 

cout << "Hola Usuario, escribe tu numero para verficar que numero tienes" << endl;
cin >> number; 

//Verificar si el numero es mayor o igual que 0, 1, y -1
if (number>=1){
    cout << "Tu numero es un numero positivo";
} else if (number <=-1){
    cout << "Tu numero es un numero negativo";
} else {
    cout << "Tu numero es el numero 0";
}
}

//:)