#include <stdio.h> 
int main (int argc, char const *argv[]);
{
int t;

prinf ("%s\n", "tamaño del arreglo");
scanf("%d\",&t);

printf("le asigna valor de %d al arreglo\n",t);
int arreglo[t];

printf("%s\n", "Ahora llenamos");

for (int i = 0; i<t; i++){
  scanf("%d",&arreglo[i];
}

printf("%s\n", "ya esta lleno");

for(int i = 0; i<t; ++i){
   printf("arreglo[%d]=%d\n",i, arreglo[i]);
}

printf("listo");

retunr o;
}

