#include <stdio.h>

void analise(int vetor[], int tamanho, int *min, int *max){
    //inicializando dados
    *min = vetor[0];
    *max = vetor[0];

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] < *min){
            *min = vetor[i];
        }
        if(vetor[i] > *max){
            *max = vetor[i];
        }
    }

    printf("Menor elemento: %d\n", *min);
    printf("Maior elemento: %d\n", *max);
}
int main(){
    int vetor[] = {2, 6, 10, 14, 16, 18, 12, 8, 4};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int min, max;

    analise(vetor, tamanho, &min, &max);
    return 0;
}
