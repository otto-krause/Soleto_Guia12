x#include <stdio.h>
void mostrar(int a, int b){
    printf("%d\n%d\n", a, b);
}
int main(){
    int a,b;
    printf("ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    mostrar(a, b);
}
