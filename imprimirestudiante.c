#include <stdio.h>
#include "aliasestudiante.c"

void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s\n", est.nombre);
    printf("Edad: %d\n", est.edad);
    printf("Promedio: %.2f\n", est.promedio);
}