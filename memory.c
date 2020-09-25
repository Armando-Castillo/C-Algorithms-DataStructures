#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void swap(int *a, int *b);

int main(void)
{
    int x = 50;
    int *y = &x;
    int *z = &x;
    printf("%p\n", y); //Get address
    printf("%i\n", *y); //Go to addressç
    printf("%p\n", y); //Get address
    printf("%i\n", *y); 


    //String
    char *s = "Armando";
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s);
    printf("%p\n", &s[0]);
    printf("%c\n", *s);

    //Memory allocation
    char *a = "Armando";
    char *b = malloc(strlen(a) + 1);
    for(int i=0, n = strlen(a); i <= n; i++){
        b[i]=a[i];
    }
    //Same as
    //strcpy(b, s);
    printf("%p\n", a);
    printf("%p\n", b);
    printf("%s\n", a);
    printf("%s\n", b);

    free(b);

    //Swap
    int j = 1;
    int k = 2;
    printf("a: %i b: %i", j,k);
    swap(&j,&k);
    printf("a: %i b: %i", j,k);


    //
    int d = 4;
    printf("%p\n", &d);
    int *e = &d;
    printf("%p\n", e);
    char *f = "Armando";
    printf("%p\n", f);
    printf("%s", f);
    int *n = malloc(sizeof(int));
    *n = 10;
    printf("%i\n", *n);
    printf("%p\n", n);
    int *h = n;
    printf("%i\n", *h);
    printf("%p\n", h);
    int *mm = h;
    printf("%p\n", mm);
    free(n);
    printf("%i\n", *h);
    int ss = 9;
    printf("%p\n", &ss);



    int *v;
    //v = malloc(sizeof(int));
    //*v = 10;
    printf("non init %p\n", v);
    printf("value: %i", *v);
}

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}