#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include "my_class.h"

using namespace std;
using namespace N;

//#define N 100
#define N 6

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

/////////////////////////////////////////////////////////

// N Queen

int board[N][N];
/*
   = {
   { 0, 0, 0, 0 },
   { 0, 0, 0, 0 },
   { 0, 0, 0, 0 },
   { 0, 0, 0, 0 }
   };
   */
int nSol = 0;


// A utility function to print solution
void printSolution()
{
    nSol++;
    printf("Solutia nr. %d:\n", nSol);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(board[i][j])
                printf("◼   ");
            else
                printf("□   ");
        }
        printf("\n\n");
    }
}

/// A utility function to check if a queen can
/// be placed on board[row][col]. Note that this
/// function is called when "col" queens are
/// already placed in columns from 0 to col-1.
/// So we need to check only left side for
/// attacking queens
bool isSafe(int row, int col)
{
    int i, j;

    /// Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    /// Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    /// Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}


bool BTR(int col)
{
    // Base case: If all queens are placed
    // then return true
    if (col >= N)
    {
        printSolution();
        //return true;
    }

    /// Consider this column and try placing
    /// this queen in all rows one by one
    for (int i = 0; i < N; i++)
    {
        /// Check if the queen can be placed on
        /// board[i][col]
        if (isSafe(i, col))
        {
            /// Place this queen in board[i][col]
            board[i][col] = 1;

            /// Recur to place rest of the queens
            if (BTR(col + 1))
                return true;

            /// If placing queen in board[i][col]
            /// doesn't lead to a solution, then
            /// remove queen from board[i][col]
            board[i][col] = 0; /// BACK_TRACK
        }
    }

    /// If the queen cannot be placed in any row in
    /// this column col then return false
    return false;
}


int main ()
{
//    double startTime = (float)clock()/CLOCKS_PER_SEC;
//
//    /* Do work */
//    fast_vector_sort();
//    cout << endl;
//
//    double endTime = (float)clock()/CLOCKS_PER_SEC;
//    double timeElapsed = endTime - startTime;
//
//    cout << "Time elapsed: "<< fixed << timeElapsed << endl;
//

    BTR(0);


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
