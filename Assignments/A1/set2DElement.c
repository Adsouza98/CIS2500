#include "arrayVars.h"

int arrayCols;

void set2DElement ( int *array, int row, int col, int value) {
  *(array + row*arrayCols + col) = value;
  return;
}
