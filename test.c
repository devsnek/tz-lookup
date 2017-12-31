#include <stdio.h>
#include "include/tz.h"

int main() {
  int offset = tzlookup(40.7589, -73.9851);
  printf("the timezone offset of times square: %d", offset);
  return 0;
}
