#include <stdio.h>

int main(int argc, char *argv){
  int A[] = { 2, 0, 1, 5, 0, 5, 2, 0 };
  int i, j, tmp;

  printf("El arreglo A:\n");
  for(i = 0; i < sizeof(A)/sizeof(int); i++){
    printf("%d\t", A[i]);
  }


  for(j = sizeof(A)/sizeof(int) - 1; j > 1; j--){
    for(i = 0; i < j; i++){
      if(A[i] > A[i + 1]){
        tmp = A[i + 1];
        A[i + 1] = A[i];
        A[i] = tmp;
      }
    }
  }

  printf("El arreglo A:\n");
  for(i = 0; i < sizeof(A)/sizeof(int); i++){
    printf("%d\t", A[i]);
  }

  return 0;
}
