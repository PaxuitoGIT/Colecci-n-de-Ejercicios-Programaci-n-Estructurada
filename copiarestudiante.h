#include <string.h>
#include "estudiante.h"

struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante copia;
    strcpy(copia.nombre, est.nombre);
    copia.edad = est.edad;
    copia.promedio = est.promedio;
    return copia;
}

int main() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    struct Estudiante estudiante2 = copiarEstudiante(estudiante1);

    return 0;
}