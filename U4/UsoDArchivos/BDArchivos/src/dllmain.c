/* Replace "dll.h" with the name of your header */
//#include "dll.h"
#include "usodarchivos_mylittletexteditor_MyTextEditor.h"

#include <windows.h>

//DLLIMPORT void HelloWorld()
//{
//	MessageBox(0,"Hello World from DLL!\n","Hi",MB_ICONINFORMATION);
//}

BOOL WINAPI DllMain(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpvReserved)
{
	switch(fdwReason)
	{
		case DLL_PROCESS_ATTACH:
		{
			break;
		}
		case DLL_PROCESS_DETACH:
		{
			break;
		}
		case DLL_THREAD_ATTACH:
		{
			break;
		}
		case DLL_THREAD_DETACH:
		{
			break;
		}
	}
	
	/* Return TRUE on success, FALSE on failure */
	return TRUE;
}

JNIEXPORT void JNICALL 
Java_usodarchivos_mylittletexteditor_MyTextEditor_crearArchivo
  (JNIEnv *env, jobject obj){
  FILE* desc; /* descriptor de archivo */
  if((desc=fopen("./archivo.txt", "w"))==NULL){
	perror("ERROR al crear o abrir el archivo!\n");
	exit(-1);
  }
	/* Archivo creado */
//  fprintf(desc, "%d", __LINE__); // El numero de linea 
                                   // en el archivo 
  fclose(desc);  /* cerramos el archivo */
}

//JNIEXPORT void JNICALL
// Java_usodarchivos_mylittletexteditor_MyTextEditor_sobrescribir
//  (JNIEnv *env, jobject obj, jstring str){
//  	
//  }
