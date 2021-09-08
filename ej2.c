#include <stdio.h>
/*
// OTRA POSIBLE SOLUCION
int * f(int h, int b){
    static int e[1];
    e[0] = h*b;
    e[1] = h*2+b*2;
    return e;
}
// Uso el array que me retorna en el main, donde x[0] es el area y x[1] es el perimetro
*/ 
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
