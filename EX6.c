/******************************************************************************
Kaue Henrique Ra:8136527     
*******************************************************************************/
#include <stdio.h>

int parametro(int a){
    int contador = 0;
    while(contador < a){
        contador++;
    printf("* ");
    }

}

void main(){
    int a;
    printf("Digite um numero para dar o parametro: \n");
    scanf("%d", &a);
    parametro(a);
}
