#include <stdlib.h>
void freeStringArray(char **array, int number) {
  int i;
  for (i=0;i<number;i++) {
      free(array[i]);
  }
  free(array);
}
