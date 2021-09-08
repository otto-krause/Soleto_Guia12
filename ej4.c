#include <stdio.h>
float presion(float a, float b){
    return a/b;
}
int main(){
    float f, a;
    printf("ingrese la fuerza en Newtons y el area de la superficie en m2: ");
    scanf("%f %f", &f, &a);
    printf("la presion es: %fPa\n", presion(f,a));
}
