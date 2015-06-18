/*Racionales .c- Es un programa para sumar numeros racionales.*/

#include <stdio.h>
#include <malloc.h>

struct fracc
{
     int n,d; /*numerador y denominador respectivamente.*/
};

int mcd(int, int);
void print_fracc(struct fracc);
struct fracc* sumar(struct fracc, struct fracc);
void print_sumdfracs_nequal(struct fracc, struct fracc);


int main ()
{
     struct fracc frac1;
     frac1.n = 2;
     frac1.d = 5;
     
     struct fracc frac2;
     frac2.n = 4;
     frac2.d = 7;
     
     struct fracc* frac3 = sumar (frac1, frac2);

  print_sumdfracs_nequal(frac1, frac2);
  if(frac3!=NULL)
     print_fracc(*frac3);
  printf("\n");
}
     
     struct fracc* sumar(struct fracc F, struct fracc G)
{  
          struct fracc* R;
          R = (struct fracc*) malloc (sizeof(*R));
          R -> n = F.n*G.d + G.n*F.d;
          R -> d = F.d*G.d;
          if ((R -> d != 0) &&( R -> n != 0))
     {
               int i = mcd(R -> n, R-> d);
               R -> n /= i;
               R -> d /= i;
               return R;
     }

 return NULL;
}

void print_fracc (struct fracc frac)
{
     printf("%d/%d", frac.n,frac.d);
}
/*
int mcd(int m, int n)
{

int r;

     do
       {printf("hoala");
           r = m % n;
           m = n;
           n = r;
           
        }while ( r != 0);
        return n;
}
*/
int mcd(int m, int n){
  int r;
  while((r=m%n)!=0){
    m=n;
    n=r;
  }
  return n;
}
void print_sumdfracs_nequal(struct fracc F, struct fracc G){
  print_fracc(F);
  printf(" + ");
  print_fracc(G);
  printf(" = ");
}
