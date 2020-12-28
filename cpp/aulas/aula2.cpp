#include <iostream>
#include <stdio.h>
#include <iomanip>>

using namespace std;

int main()
{
    cout << "HELLO WORLD" << endl;

    int num1 = 11;
    float num2 = 7;
    int num3;

    if(num1 > num2) {
        cout << "Eh maior" << endl;
    }else{
        cout << "Nao eh maior" << endl;
    }
    cout << "Entre com um valor: " << endl;
    cin >> num3;

    for(int i = 0; i <= 10; i++) {
        cout << "Iterador: " << i << endl;
    }

    while(num1 <= 100) {
        cout << "Hello" << endl;
        num1++;
    }

    return 0;
}
