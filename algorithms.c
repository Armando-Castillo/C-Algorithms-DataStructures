#include <stdio.h>
#include <string.h>

typedef struct 
{
    int grado;
    int grupo;
    char bilin;
}grupos;

void draw(int n);
int factorial(int n);
int fibonnaci(int n);
int collatz(int n);
int main(void)
{
    //NUMBERS
    int numbers[6] = {2, 5, 8, 12, 18 ,23};

    for(int i = 0; i < 6; i++)
    {
        if(numbers[i] == 12)
        {
            printf("Found\n");
            //return 0;
        }
    }
    //printf("Not found\n");
    
    //NAMES
    //char names[20] ={"Abcdefghijk"};
     
    //for(int i = 0; i < 20; i++)
    //{
        //if(strcmp("f", names[i]) == 1)
        //{
            //printf("Found: %c\n", names[i]);
            //return 0;
        //}
    //}  

    
    //draw(4);
    printf("%i",factorial(5));
    printf("\n");
    printf("%i",fibonnaci(8));
    printf("\n");
    printf("%i", collatz(50));
}

//RECURSIVITY
void draw(int n){
    if(n == 0){
        return;
    }
    draw(n-1);
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}

int factorial(int n){
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int fibonnaci(int n){
    if(n==1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return fibonnaci(n-2) + fibonnaci(n-1);
}

int collatz(int n){
    if(n==1)
        return 0;
    else if(n % 2 == 0)
        return 1 + collatz(n/2);
    else
        return 1 + collatz(3*n+1);
}