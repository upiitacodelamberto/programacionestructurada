/* main.c - Elaboracion para obtener un codigo para 
 *          realizar el metodo de la burbuja.
 */
#include <stdio.h>

int main(int argc, char *argv[]){
  int A[] = {2, 0, 1, 5, 0, 5, 2, 0};
  int i, j, tmp;
  for(i = 0; i < sizeof(A)/sizeof(int); i++)
    printf("%d\t", A[i]);
  printf("\n");

  /* Primera ronda */
  for(i = 0; i < 8 - 1; i++){
    if(A[i] > A[i + 1]){
      tmp = A[i + 1];
      A[i + 1] = A[i];
      A[i] = tmp;
    }
  }
  for(i = 0; i < sizeof(A)/sizeof(int); i++)
    printf("%d\t", A[i]);
  printf("\n");

  /* segunda ronda */
  for(i = 0; i < 8 - 2; i++){
    if(A[i] > A[i + 1]){
      tmp = A[i + 1];
      A[i + 1] = A[i];
      A[i] = tmp;
    }
  }
  for(i = 0; i < sizeof(A)/sizeof(int); i++)
    printf("%d\t", A[i]);
  printf("\n");

  /* tercera ronda */
  for(i = 0; i < 8 - 3; i++){
    if(A[i] > A[i + 1]){
      tmp = A[i + 1];
      A[i + 1] = A[i];
      A[i] = tmp;
    }
  }
  for(i = 0; i < sizeof(A)/sizeof(int); i++)
    printf("%d\t", A[i]);
  printf("\n");

  return 0;
}
