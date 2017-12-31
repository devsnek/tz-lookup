[DarkSky's tz-lookup](https://github.com/darkskyapp/tz-lookup/) but for c, and it returns the utc offset instead of the timezone name.

Note that this does not handle DST.

```c
#include <stdio.h>
#include <tz.h>

int main() {
  int offset = tzlookup(40.7589, -73.9851);
  printf("the timezone offset of times square: %d", offset);
  return 0;
}
```
