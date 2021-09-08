#include <stdio.h>
float ovtaba(int x){
    return (float)x/8;
}
int main(){
    int a;
    printf("ingrese un numero entero: ");
    scanf("%d", &a);
    printf("la ovtaba parte es %f", ovtaba(a));
}
