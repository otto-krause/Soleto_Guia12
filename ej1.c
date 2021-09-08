#include <stdio.h>
int escanear(){
  int a;
  printf("ingrese un numero: ");
  scanf("%d", &a);
  return a;
}
int main(){
    int a,b;
    a = escanear();
    b = escanear();
    printf("%d\n%d\n", a, b);
}
