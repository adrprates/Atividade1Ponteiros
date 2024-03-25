#include <stdio.h>

int main(){
    //declarando o array
    float array[10] = {1.2, 2.4, 4.8, 6.8, 8.0, 7.2, 9.8, 14.6, 32.76, 80.62};

    printf("- - - Posicoes e Enderecos - - -\n\n");
    for(int i = 0; i < 10; i++){
        printf("Posicao: %d\nEndereco: %d\n\n", i, &array[i]);
    }

    return 0;
}
