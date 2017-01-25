#include <stdlib.h>

int **createArray (int rows, int cols) {
  int** dynamicArray = (int**)malloc(rows*sizeof(int*));
  int i;
  for(i=0;i<rows;i++) {
    dynamicArray[i] = (int*)malloc(cols*sizeof(int));
  }
  return dynamicArray;
}
