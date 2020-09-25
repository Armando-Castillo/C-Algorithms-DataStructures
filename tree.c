#include<stdio.h>


typedef struct tree{
    int value;
    struct tree *pointer1;
    struct tree *pointer2;
} tree;

typedef struct trie{
    char *name[10];
    struct trie *pointers[10];
} trie;

//Prototype
void binarySearchTree(tree *arbol, int n);

int main(void){

}


void binarySearchTree(tree *arbol, int n){
    tree *tmp = arbol;
    while(tmp != NULL){
        if ( (n) < (tmp -> value)){
            tmp = tmp -> pointer1;
        }
        else if(n > tmp -> value){
            tmp = tmp -> pointer2;
        }
        else if(n == tmp -> value){
            return "Encontrado";
        } else {
            return "No existe";
        }
   }
}