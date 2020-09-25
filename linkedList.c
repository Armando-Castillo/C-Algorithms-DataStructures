#include<stdio.h>
#include<stdlib.h>

//Linked list
//Representation of a node
typedef struct node{
    int number;
    struct node *next;
} node;

void agregarFinal(node *list, int n);
void agregarAntesDeOtro(node *list, int n);

int main(void){

    //first node
    node *list = NULL;

    //Agregar nodo a lista
    node *nodo = malloc(sizeof(node));
    //Good practice
    if(nodo == NULL){ return 1; }
    nodo -> number = 1;
    nodo -> next = NULL;
    list = nodo;

    //Agregar segundo nodo
    nodo = malloc(sizeof(node));
    if(nodo == NULL){ return 1; }
    nodo -> number = 2;
    nodo -> next = NULL;
    list -> next = nodo;

    //Agregar tercer nodo
    nodo = malloc(sizeof(node));
    if(nodo == NULL){ return 1; }
    nodo -> number = 3;
    nodo -> next = NULL;
    list -> next -> next = nodo;

    agregarFinal(list, 4);
    agregarFinal(list, 6);
    agregarFinal(list, 8);
    agregarFinal(list, 10);
    agregarFinal(list, 12);
    agregarAntesDeOtro(list, 5);
    agregarAntesDeOtro(list, 11);
    agregarAntesDeOtro(list, 13);


    //Imprimir lista
    for(node *tmp = list; tmp != NULL; tmp = tmp -> next){
        printf("%i\n", tmp->number);
    }

    //Free list
    while(list != NULL){
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

}

void agregarFinal(node *list, int n){
    //Agregar n nodo al final
    node *nodo = malloc(sizeof(node));
    if(nodo == NULL){ return; }
    node *tmp = list;
    while(tmp -> next != NULL){
        tmp = tmp -> next;
    }
    nodo -> number = n;
    nodo -> next = NULL;
    tmp -> next = nodo;
}

//Para esto tiene que estar ordenado
void agregarAntesDeOtro(node *list, int n){
    node *nodo = malloc(sizeof(node));
    if(nodo == NULL){ return; }
    node *tmp = list;
    while(tmp -> next != NULL && (tmp -> next -> number) < n){
        tmp = tmp -> next;
    }
    nodo -> number = n;
    nodo -> next = tmp -> next;
    tmp -> next = nodo;
}