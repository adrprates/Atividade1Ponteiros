#include <stdio.h>

//criando funcao para separar as partes do numero
void separarPartes(double numero, int *parteInteira, double *parteFracionaria){
    *parteInteira = (int) numero;
    *parteFracionaria = numero - *parteInteira;
}

int main(){
    double numero;
    int parteInteira;
    double parteFracionaria;

    printf("Digite um numero real:\n");
    scanf("%lf", &numero);
    printf("\n");

    //chamando funcao
    separarPartes(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %lf\n", parteFracionaria);

    return 0;
}
