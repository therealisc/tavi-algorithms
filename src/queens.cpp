#include "queens.h" // header in local directory
#include <cstdlib>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace NT;

#define N 4

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
void printSolution() {
  nSol++;
  printf("Solutia nr. %d:\n", nSol);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (board[i][j]) {
        printf("◼   ");
      } else {
        printf("□   ");
      }
    }
    printf("\n\n");
  }
}

void checkSolution(int i, int col) {
  board[i][col] = 1;
  printSolution();
  usleep(500000);
  board[i][col] = 0;
  system("clear");
}

/// A utility function to check if a queen can
/// be placed on board[row][col]. Note that this
/// function is called when "col" queens are
/// already placed in columns from 0 to col-1.
/// So we need to check only left side for
/// attacking queens
bool isSafe(int row, int col) {
  int i, j;

  /// Check this row on left side
  for (i = 0; i < col; i++) {
    checkSolution(i, col);
    if (board[row][i])
      return false;
  }

  /// Check upper diagonal on left side
  for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
    checkSolution(i, col);
    if (board[i][j])
      return false;
  }

  /// Check lower diagonal on left side
  for (i = row, j = col; j >= 0 && i < N; i++, j--) {
    checkSolution(i, col);
    if (board[i][j])
      return false;
  }

  return true;
}

bool queens::BTR(int col) {
  // Base case: If all queens are placed
  // then return true
  if (col >= N) {
    usleep(5000000);
    printSolution();
    usleep(15000000);
    // return true;
  }

  /// Consider this column and try placing
  /// this queen in all rows one by one
  for (int i = 0; i < N; i++) {
    /// Check if the queen can be placed on
    /// board[i][col]
    if (isSafe(i, col)) {
      /// Place this queen in board[i][col]
      board[i][col] = 1;

      /// Recur to place rest of the queens
      if (BTR(col + 1))
        return true;

      /// If placing queen in board[i][col]
      /// doesn't lead to a solution, then
      /// remove queen from board[i][col]
      board[i][col] = 0; /// BACK_TRACK
      printf("Queen removed");
    }
  }

  /// If the queen cannot be placed in any row in
  /// this column col then return false
  return false;
}
