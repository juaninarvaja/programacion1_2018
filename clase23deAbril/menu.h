#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct{
int dia;
int mes;
int anio;

} eFecha;



 typedef struct{

char nombre[20];
float sueldo;
int legajo;
eFecha fechaIngreso;
int estado;
 }ePersona;

int menu();
void inicializarPersona(ePersona arrayPersona[], int tamanioArray);
void altaPersona(ePersona arrayPersona[], int tamanioArray);
int buscaLibre(ePersona arrayPersona[], int tamanioArray);
eFecha cargarFecha(eFecha auxFecha);
int buscarPorLegajo(ePersona arrayPersonas[], int tamanioArray, int legajo);
void listarPersonas(ePersona arrayPersonas[], int tamanioArray);
