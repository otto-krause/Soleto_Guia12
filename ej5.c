#include <stdio.h>
int * escanear(){
  static int r[6];
  r[5] = 0;
  for(int i = 0; i<5; i++){
    printf("ingrese la resistencia %d: ", i+1);
    scanf("%d", &r[i]);
    r[5] += r[i];
  }
  return r;
}
int main(){
  
  int * r = escanear();
  for(int i = 0; i<5; i++){
    printf("R%d: %d\n", i+1, r[i]);
  }
  printf("RT: %d\n", r[5]);
}
