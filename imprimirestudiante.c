#include <stdio.h>
#include "aliasestudiante.c"

void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("Promedio: %.2f\n", est.promedio);
}

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    imprimirEstudiante(estudiante1);

    return 0;
}