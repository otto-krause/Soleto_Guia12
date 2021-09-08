#include <stdio.h>
int area(int h, int b){
    return h * b;
}
int perimetro(int h, int b){
    return h*2+b*2;
}
int main(){
    int a,b;
    printf("ingrese el la altura y el ancho de un rectangulo: ");
    scanf("%d %d", &a,&b);
    printf("el area es %d y el perimetro es %d\n", area(a, b), perimetro(a, b));
}
