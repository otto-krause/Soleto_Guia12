#include <stdio.h>
float octava(int x){ // retorna tipo float
    return (float)x/8;
}
int main(){
    int a;
    printf("ingrese un numero entero: ");
    scanf("%d", &a);
    printf("la octava parte es %f", octava(a));
}
