#include <stdio.h>
#include <iostream>
#define NDFILAS	8
#define NDCOLUMNAS	3
using std::cout;
using std::endl;

class Tecla{
  char piano[NDFILAS][NDCOLUMNAS];
public:
  Tecla(){
    for(int i = 0; i < NDFILAS; i++)
      for(int j = 0; j < NDCOLUMNAS; j++)
        piano[i][j] = '*';
  }
  void mostrar();
};//End class Tecla


class ConjuntoDInts {
	int arr[6];		//arreglo que contiene 3 ints
 public:
	bool esta(int);
	ConjuntoDInts(int, int, int, int, int, int);
};
int main()
{
#ifdef PRIMERA_VERSION
	ConjuntoDInts CDI1(4, 5, 6, 11, 12, 13);
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 18; i++) {
			if (CDI1.esta(i)) {
				cout << " ";
			} else {
				cout << "*";
			}
		}
		cout << endl;
	}
	cout << endl;
#endif /* PRIMERA_VERSION */
  Tecla T;
  T.mostrar();
        return 0;
}

bool ConjuntoDInts::esta(int N)
{
	for (int i = 0; i < 6; i++) {
		if (arr[i] == N)
			return true;
	}
	return false;
}

ConjuntoDInts::ConjuntoDInts(int a, int b, int c, int d, int e, int f)
{
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	arr[5] = f;
}

void Tecla::mostrar(){
    for(int i = 0; i < NDFILAS; i++){
      for(int j = 0; j < NDCOLUMNAS; j++)
        cout << piano[i][j];
      cout << endl;
    }
}
