#include <iostream>

using namespace std;


void funcion();

string nombreGlobal = "JuanGuillermo";


int main()
{
    // para los nombre de las variables solo pueden iniciar con letras y _ 
    int edad;
    edad = 40;
    int numero {22};  // otra forma de asignar en c++
    string nombre = "Juanito";
    cout << "Mi nombre es " << nombre << " mi edad es " << edad << " años" << endl;

    funcion();

    return 0;
}

void funcion(){
    cout << "me llamo " << nombreGlobal << " nombre de variable global" << endl;
}