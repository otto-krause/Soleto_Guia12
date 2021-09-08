#include <stdio.h>
void mostrar(int *a){
    int total = 0;
    for(int i = 0; i < 5; i++){
        printf("R%d: %d\n",i+1 ,a[i]);
        total += a[i];
    }
    printf("el total es %d", total);
}
int main(){
    int r[4];
    printf("ingrese 5 resistencias");
    for(int i = 0; i<5; i++){
         scanf("%d", &r[i]);
    }
    mostrar(r);
}

