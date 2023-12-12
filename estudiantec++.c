#include <iostream>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    float promedio;

    Estudiante(std::string nombre, int edad, float promedio) {
        this->nombre = nombre;
        this->edad = edad;
        this->promedio = promedio;
    }

        void imprimir() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
    }
};