void freeArray(int **array[], int rows, int cols) {
  int i;
  for (i = 0; i < rows; i++) {
    free(array[i]);
  }
  free(array);
}
