#include <string.h>
#include "estudiante.h"
#include <stdlib.h>

int main() {
struct Estudiante *estudiante1 = malloc(sizeof(struct Estudiante));

if (estudiante1 == NULL) {
    printf("No se pudo asignar memoria");
    return 1;
}

strcpy(estudiante1->nombre, "Juan");
estudiante1->edad = 20;
estudiante1->promedio = 9.5;

free(estudiante1);

return 0;
}