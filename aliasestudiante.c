#include <string.h>

typedef struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    return 0;
}