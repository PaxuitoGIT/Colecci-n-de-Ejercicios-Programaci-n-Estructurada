#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiante.h"

struct Nodo {
    struct Estudiante estudiante;
    struct Nodo *siguiente;
};