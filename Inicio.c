
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{

    long int number = 15;
    float number2 = 7;
    char number3 = 12;

    printf("Hello World");
    scanf("%d", &number);
    getchar();

    printf("%d, %f, %c", number, number2, number3);

    return 0;
}
