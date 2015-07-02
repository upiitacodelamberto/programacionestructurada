/* Replace "dll.h" with the name of your header */
//#include "dll.h"
#include "jnimathclient_JNIMathClient.h"
#include <windows.h>

JNIEXPORT jint JNICALL Java_jnimathclient_JNIMathClient_addTwoNumbers
(JNIEnv *env, jobject obj, jint one, jint two)
{
        return (one + two);
}
JNIEXPORT jint JNICALL Java_jnimathclient_JNIMathClient_multiplyTwoNumbers
(JNIEnv *env, jobject obj, jint one, jint two)
{
        return (one * two);
}

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
