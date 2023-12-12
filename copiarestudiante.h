#include <string.h>
#include "estudiante.h"

struct Estudiante copiarEstudiante(struct Estudiante est) {
    struct Estudiante copia;
    strcpy(copia.nombre, est.nombre);
    copia.edad = est.edad;
    copia.promedio = est.promedio;
    return copia;
}