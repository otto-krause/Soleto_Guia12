#include <stdio.h>
char* comparar(int x, int y){ // retorna una cadena de caracteres
    if(x > y)
        return "mayor";
    if(x < y)
        return "menor";
    else
        return "igual";
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d es %s que %d", a, comparar(a,b), b);
}
