#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include "my_class.h"

using namespace std;
using namespace N;

#define N 100

void fast_vector_sort()
{
    //cout << "Cate numere vrei sa sortezi? ";
    int n = 100;
    int i;
    //cin >> n;

    int sorted_vector[N];
    for (i = 0; i < N; ++i) {
        sorted_vector[i] = 0;
    }

    //cout << endl;

    //cout << "Introdu numerele pe care vrei sa le sortezi? ";

    int unsorted_vector[n] = {
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
        22, 23, 22, 44, 3, 1, 4, 5, 98, 8, 22, 23, 22, 44, 3, 1, 4, 5, 98, 8,
    };

    int numar_introdus;
    int numar_maxim;
    for (i = 0; i < n; i++) {
        //cin >> numar_introdus;
        numar_introdus = unsorted_vector[i];
        sorted_vector[numar_introdus]++;

        if (numar_introdus > numar_maxim)
            numar_maxim = numar_introdus;
    }

    cout << endl;

    for (i = 0; i <= numar_maxim; i++) {
        if (sorted_vector[i] > 0) {
            for (int y = 0; y < sorted_vector[i]; y++) {
                cout<< i << " ";
            }
        }
    }
}

int main ()
{
    double startTime = (float)clock()/CLOCKS_PER_SEC;

    /* Do work */
    fast_vector_sort();
    cout << endl;

    double endTime = (float)clock()/CLOCKS_PER_SEC;
    double timeElapsed = endTime - startTime;

    cout << "Time elapsed: "<< fixed << timeElapsed << endl;

    return 0;
}

void numbers_sort()
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
