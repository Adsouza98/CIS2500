#include <stdlib.h>

#include "arrayVars.h"

int arrayRows;
int arrayCols;

int *create2DArray (int rows, int cols) {

  arrayRows = rows;
  arrayCols = cols;

  int *dynamicArray = (int*)malloc(rows * cols * sizeof(int*));

  return dynamicArray;
}
