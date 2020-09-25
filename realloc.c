#include<stdio.h>
#include<stdlib.h>

int main(void){


    //MANUAL REALLOCATION OF MEMORY//
    int *list = malloc(3 * sizeof(int));
    if(list==NULL)
        return 1;

    for(int i = 0; i < 3; i++){
        list[i] = i+1;
    }

    int *tmp = malloc(4 * sizeof(int));
    if(tmp==NULL) 
        return 1;
    
    for(int i = 0; i < 3; i++){
        tmp[i] = list[i];
    }

    tmp[3] = 4;

    free(list);
   
    list = tmp;

    for(int i = 0; i < 4; i++){
        printf("%i\n", list[i]);
    }


    //////REALLOC//////
    //Makes the same above with malloc and free
    int *tmp2 = realloc(list, 4*sizeof(int));
    if(tmp2 == NULL)
        return 1;

    tmp2[3] = 5;
    list = tmp2;


    for(int i = 0; i < 4; i++){
        printf("%i\n", list[i]);
    }
    
    free(tmp2);
    free(list);



}