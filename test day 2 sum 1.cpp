#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
  int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int transpose[COLS][ROWS];

  printf("Original Matrix:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      transpose[j][i] = matrix[i][j];
    }
  }

  printf("Transpose Matrix:\n");
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < ROWS; j++) {
      printf("%d\t", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}

