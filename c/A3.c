#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct teste
{
    int tipo[20];
    int reference[20];
    int fin;
};

struct teste tes;

////////////////////////////////////////////////////




int main(int argc, char *argv[])
{

    printf("Component: ");
    fflush(stdin);
    fgets(tes.tipo,20,stdin);

    printf("Reference: ");
    fflush(stdin);
    fgets(tes.reference,20,stdin);

    //////////////////////////////////////////////


    int valor = 10;
    int *point1;
    int **point2;

    point1 = &valor;
    point2 = &point1;

    printf("%d\n", **point2);

    /////////////////////////////////////////////

    return 0;
}
