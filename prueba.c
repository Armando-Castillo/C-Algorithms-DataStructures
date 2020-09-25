#include<stdio.h>
#include<string.h>

#define PI 3.1416

int main(int argc, char argv[]){

    //int a = 0;
    //float perimetro = 0;
    //Input
    //printf("Ingresa el radio:");
    //scanf("%i", &a);
    //perimetro = 2*PI*a;
    //signed char operacion = 'm';
    //printf("La %c es %.2f", operacion, perimetro);

    //Vectores o Strings
    char nombre[5];
    printf("dijite su nombre:\n");
    strcpy(nombre,  fgets(nombre, sizeof(nombre), stdin));
    printf("Su nombre es");
    printf("%c", nombre[4]);
    //int numero = 0;
    //printf("\ningrese el numero:\n");
    //scanf("%i", &numero);
    //Condicional con ?
    //(numero % 2 == 0) ? printf("par") : printf("impar");
    //char nombres[2] = "Ar";
    //printf("%s", nombres);
    return 0;
}