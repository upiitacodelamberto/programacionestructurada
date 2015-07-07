//arguments.c  - muestra como podemos usar argumentos
//               en nuestros programas en lenguaje C.
#include <stdio.h>
#include <stdlib.h>
float contador;
int main(int argc, char *argv[]){
  float cont;
  printf("argc = %d\n", argc);
  printf("argv[0]: %s\n", argv[0]);
  if(argc > 1){
    printf("argv[1]: %s\n", argv[1]); 
      contador = atof(argv[1]);
      printf("%f\n", atof(argv[1]));
      printf("contador = %f\n", contador);
      cont = atof(argv[1]);
      printf("cont = %f\n", cont);
  }
  

  return 0;
}
