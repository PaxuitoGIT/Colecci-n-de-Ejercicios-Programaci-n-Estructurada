#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estudiante.h"

struct Nodo {
    struct Estudiante estudiante;
    struct Nodo *siguiente;
};

struct Nodo *inicio = NULL;

void agregarEstudiante(char *nombre, int edad, float promedio) {
    struct Nodo *nuevoNodo = malloc(sizeof(struct Nodo));
    strcpy(nuevoNodo->estudiante.nombre, nombre);
    nuevoNodo->estudiante.edad = edad;
    nuevoNodo->estudiante.promedio = promedio;
    nuevoNodo->siguiente = inicio;
    inicio = nuevoNodo;
}

void verEstudiantes() {
    struct Nodo *temp = inicio;
    while (temp != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", temp->estudiante.nombre, temp->estudiante.edad, temp->estudiante.promedio);
        temp = temp->siguiente;
    }
}