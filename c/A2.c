#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

    int a = 1, b = 2, c = 3, d = 4;

    if (a == b) {
        printf("eh igual");

    }else{
        printf("Nao eh igual");
    }

    int i = 1;

    for(i; i <= 10; i++) {
        printf("\nHello World");
    }

    switch(i) {

        case 1:
            printf("\n eh 1");
            break;
        case 2:
            printf("\n eh 2");
            break;
        case 10:
            printf("\n eh 10");
            break;
        default:
            printf("Nothing");

    }



    return 0;
}
