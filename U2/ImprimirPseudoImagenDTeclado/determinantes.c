#include <stdio.h>
#include <malloc.h>   /* malloc() */

float d[1][1];

float D[2][2];

float D3x3[3][3];

float det(float d[][2], int tam);

int main(){
  d[0][0] = 3.1416;
  D[0][0] = d[0][0];
  printf("El determinate es %f\n", det(D, 1));
  D[0][0] = 10; D[0][1] = 7;
  D[1][0] = 12; D[0][1] = 20;
  printf("El determinate es %f\n", det(D, 2));
  float *p; // p es de tipo float *  
            //(i.e. apuntador a float)
            // *p es de tipo float
            // hasta este momento p no ha sido 
            // inicializado.

  float f = 2.72;
  p = (float *)malloc(sizeof(float));
  *p = f;   // antes de poder hacer esto (utilizar
            // el float *p) DEBEMOS inicializar p
  printf("El contenido de f = %f\n", *p);
  float *a = (float *)malloc(2*sizeof(float));
  *a = f;
  *(a + 1) = 2*f;
  printf("Los float apuntados por a: %f, %f\n", *a, *(a + 1));
return 0;
}

float det(float d[][2], int tam){
  if(tam == 1){
    return d[0][0];
  }

  if(tam == 2){
    return D[0][0]*D[1][1] - D[0][1]*D[1][0];
  }
  printf("NO SE CALCULO EL DETERMINANTE\n");
  return 100000000000;
}



