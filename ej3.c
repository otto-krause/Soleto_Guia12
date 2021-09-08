#include <stdio.h>
int porcentaje(float a, float b){
    return (a/b)*100;
}
int main(){
    float a, b;
    printf("ingrese la cantidad de hombres y mujeres que enviaron su curricular y el total: ");
    scanf("%f %f",&a, &b);
    printf("el porcentaje es %%%d\n", porcentaje(a , b));
}
