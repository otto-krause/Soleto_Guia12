#include <stdio.h>
float octaba(int x){
    return (float)x/8;
}
int main(){
    int a;
    printf("ingrese un numero entero: ");
    scanf("%d", &a);
    printf("la octaba parte es %f", octaba(a));
}
