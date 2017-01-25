#include <stdlib.h>
#define MAXSIZE 100
char **createStringArray(int number) {
  char** dynamicStrArray = malloc(number*sizeof(char*));
  int i;
  for(i=0;i<number;i++) {
    dynamicStrArray[i] = malloc(MAXSIZE*sizeof(char));
  }
  return dynamicStrArray;
}
