#include <stdio.h>
#include "trim.h"


int main(int argc, char const *argv[]) {
  printf("%d Arguments\n", argc);

  for (int i = 0; i < argc; i++) {
    printf("Argumets # %d %s\n", i, argv[i]);
  }

  char trimmed[STRLEN] = "no content";
  trim(argv[1], trimmed);
  printf("Trimmed argument: %s\n", trimmed);
}
