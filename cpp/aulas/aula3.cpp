
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

struct People {

    string name;
    int age;

};

int main()
{
    cout << "HELLO WORLD" << endl;

    int i = 0;

    do {
        i++;
        cout << "Number: " << i << endl;
    }while(i <= 10);

    switch(i) {

        case 1:
            cout << "1" << endl;
            break;
        case 10:
            cout << "10" << endl;
            break;
        default:
            cout << "end" << endl;

    };

    int j = 0;
    cout << "Number: " << endl;
    cin >> j;
    string text = (i<=10) ? "menor" : "maior";

    cout << text << endl;

    system("mkdir aa");

    People p;

    p.name = "Charles";
    p.age = 19;

    cout << p.age << endl;


    return 0;
}
