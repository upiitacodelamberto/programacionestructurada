#include <stdio.h>  /* FILE, i.e. los streams */
#include <stdlib.h> /* exit() */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/**
 * Errores:
 * -1     No se pudo crear o abrir archivo.
 */
int main(int argc, char *argv[]) {
  FILE* desc; /* descriptor de archivo */
  if((desc=fopen("./ejemplo.txt", "w"))==NULL){
	perror("ERROR al crear o abrir el archivo!\n");
	exit(-1);
  }
	/* Archivo creado */
  fprintf(desc, "%d", __LINE__); /* El numero de linea 
                                    en el archivo */
  fclose(desc);  /* cerramos el archivo */
  return 0;
}//End main()
