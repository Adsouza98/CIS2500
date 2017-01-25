#include <string.h>
#define MAXSIZE 100

void setStringArray( char **array, int index, char *string) {
  strncpy(array[index], string, MAXSIZE);
  return;
}
