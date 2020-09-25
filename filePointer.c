#include <stdio.h>

int main(void){
    //a=append -> Va al final del archivo y escribe
    //r=read
    //w=write -> Pierde la información de antes para volver a escribir
    FILE *file = fopen("file.csv", "w");
    char *nombre = "Armando";
    printf("%s\n", nombre);
    fputs(nombre, file);
    fclose(file);

    FILE *file2 = fopen("file.csv", "r");


    //Obtiene el primer caracter del file pointer
    //EL archivo debe estar ecrito en read
    char char1 = fgetc(file2);
    printf("%c\n", char1);

    fclose(file);
}