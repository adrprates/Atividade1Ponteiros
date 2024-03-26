#include <stdio.h>
#include <math.h>

void calculoEsfera(double *raio){
    //calculo da area
    double area = 4.0 * M_PI * pow(*raio, 2);
    printf("Area da esfera: %lf\n", area);

    //calculo do volume
    double volume = (4.0/3.0) * M_PI * pow(*raio, 3);
    printf("Volume da esfera: %lf\n", volume);

}

int main(){
    double raio;

    printf("Digite o raio da esfera:\n");
    scanf("%lf", &raio);
    printf("\n");

    //chamando funcao
    calculoEsfera(&raio);

    return 0;
}
