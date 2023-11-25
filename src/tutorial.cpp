#include <iostream>
#include <string>
#include "my_class.h"

using namespace std;
using namespace N;

#define N 100

int main ()
{
    cout << sizeof(int) << endl;

    int n;
    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    cout << endl;

    int v[N]; // ocupa in memorie N * sizeof(int)
    for (int i = 0; i < N; ++i) {
        v[i] = 0;
        //cout << v[i] << ",";
    }

    cout << endl;

    cout << "Introduceti vectorul de sortat: ";
    int numar_introdus;
    int numar_maxim;

    for (int i = 0; i < n; i++) {
        cin >> numar_introdus;
        v[numar_introdus]++;

        if (numar_introdus > numar_maxim)
            numar_maxim = numar_introdus;
    }

    cout << "Numerele sortate:" << endl;
    for (int i = 0; i <= numar_maxim; i++) {
        if(v[i] > 0)
        {
            for (int j = 0; j < v[i]; j++) {
                cout << i << " ";
            }
        }
    }

    cout << endl;

    return 0;
}

void anotimpuri_switch()
{
    cout << endl;
    string anotimpuri[4] = {"primavara", "vara", "toamna", "iarna"};

    for (int i = 1; i <= 12; ++i) {
        switch (i) {
            case 3 ... 5:
                cout << anotimpuri[0] << endl;
                break;
            case 6 ... 8:
                cout << anotimpuri[1] << endl;
                break;
            case 9 ... 11:
                cout << anotimpuri[2] << endl;
                break;
            default:
                cout << anotimpuri[3] << endl;
        }
    }
}

void anotimpuri_if()
{
    string anotimpuri[4] = {"primavara", "vara", "toamna", "iarna"};

    cout << "Introduceti luna: ";
    int luna;
    cin >> luna;

    if ( luna >= 3 && luna <= 5 ) {
        cout << anotimpuri[0] << endl;
    }
    else if ( luna >= 6 && luna <= 8 ) {
        cout << anotimpuri[1] << endl;
    }
    else if ( luna >= 9 && luna <= 11 ) {
        cout << anotimpuri[2] << endl;
    }
    else if ( luna > 12 | luna < 1 ) {
        cout << "Cate luni are anul ba" << endl;
    }
    else {
        cout << anotimpuri[3] << endl;
    }
}
