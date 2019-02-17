/*
Autor: AMAURY MORALES CERECEDO
Entrada: N, J y K. Numeros enteros.
Salida: N tablas de multiplicar. (x hasta n) por (j hasta k). Donde a x se le suma 1 despues de que j llega a k.
Procedimiento general: Se hacen 2 ciclos para multiplicar numeros por otros numeros limitados entre n y k. Solo imprime hasta n tablas.

Notas: No se entiende muy bien a que se refiere con valor j y valor k, asi que lo hice con lo que entendi
Segun mi entendimiento, es necesario utilizar variables globales si quiero utilizar funciones que sobreescriban valores.
Es mejor asi en lugar de tener codigo espaghetti que pasa multiples parametros que solo se utilizan una vez debido a que son variables
locales. El main queda mas limpio, tambien.

Hice 3 arreglos diferentes porque un arreglo tridimensional me hubiera guardado 1 solo valor con las 3 posiciones diferentes.
Al hacer 3 arreglos, puedo almacenar un valor en cada uno que tienen la misma posicion para asi solo poder imprimirla en la salida.

*/

//PREMISA//
/*Imprimir las primeras n tablas de multiplicar que incluyan desde el valor j hasta el valor k*/

#include <stdio.h>

//DECLARACIONES GLOBALES//
int numeroN = 0; //n
int numeroJ = 0; //j
int numeroK = 0; //k

int contadorI = 1; //Para el ciclo
int contadorO = 1; //Para el ciclo
int constanteA = 1; //Auxiliar

char lista[999]; //La unica forma de poder tener la salida en el bloque Salida y no en Proceso. Primer numero
char lista2[999]; //Segundo numero
char lista3[999]; //Primero por segundo

void Entrada(),Proceso(int j, int k, int n),Salida(int n);

int main()
{
 Entrada();
 Proceso(numeroJ, numeroK, numeroN);
 Salida(numeroN);
}

/*Funcion entrada
Solo toma j, k y n
*/
void Entrada()
{
 printf("Por favor, introduzca el valor minimo: ");
 scanf("%d", &numeroJ);
 printf("Por favor, introduzca el valor maximo: ");
 scanf("%d", &numeroK);
 printf("Por favor, introduzca el numero de tablas de multiplicar a imprimir: ");
 scanf("%d", &numeroN);
}

/*Funcion proceso
Toma todos los numeros introducidos por el usuario y escribe las tablas de multiplicar en una lista
*/
void Proceso(int j, int k, int n)
{
 for (contadorO = 1; contadorO <= n; contadorO++)
 {
  contadorI = j;
  for (contadorI = j; contadorI <= k; contadorI++)
  {
   lista[constanteA] = contadorO;
   lista2[constanteA] = contadorI;
   lista3[constanteA] = contadorO*contadorI;
   constanteA++;
  }
 }
}

/*Funcion salida
Solo imprime las tablas de multiplicar almacenadas en una lista
*/
void Salida(int n)
{
 contadorI = 1;
 for (contadorI = 1; contadorI <= n; contadorI++)
 {
  printf("%d x %d = %d \n", lista[contadorI], lista2[contadorI], lista3[contadorI]);
 }

 scanf("%d", &constanteA); //GetChar no me funciono aqui, asi que solo reescribo una variable.
}