#include "arrayVars.h"

int arrayCols;

int get2DElement ( int *array, int row, int col) {
  int value;
  value = *(array + row*arrayCols + col);

  return value;
}
