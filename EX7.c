/******************************************************************************
Kaue Henrique Ra:8136527 
*******************************************************************************/
#include <stdio.h>

int cubo(int n){
    return (n * n * n);
}

int main(){
    int n;
    printf("Digite o valor a ser passado: \n");
    scanf("%d", &n);

    printf("O cubo do valor passado e: %d\n", cubo(n));
}
