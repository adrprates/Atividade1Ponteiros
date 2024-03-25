#include <stdio.h>

int main(){
    int a, b;

    //declarando ponteiros
    int *p1, *p2;

    //atribuindo valores aos ponteiros
    p1 = &a;
    p2 = &b;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);
    printf("\n");

    if(p1 > p2){
        printf("Valor do maior endereco: %d\n", *p1);
        printf("Maior endereco: %d\n\n", p1);
        printf("Valor do menor endereco: %d\n", *p2);
        printf("Menor endereco: %d\n", p2);
    } else{
        printf("Valor do maior endereco: %d\n", *p2);
        printf("Maior endereco: %d\n\n", p2);
        printf("Valor do menor endereco: %d\n", *p1);
        printf("Menor endereco: %d\n", p1);
    }

    return 0;
}
