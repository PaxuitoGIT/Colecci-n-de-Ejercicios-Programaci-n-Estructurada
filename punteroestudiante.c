#include "estudiante.h"

int main() {
    struct Estudiante estudiante1;
    struct Estudiante *punteroEstudiante;

    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    punteroEstudiante = &estudiante1;

    return 0;
}