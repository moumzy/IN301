#include <stdio.h>
#include "circonference.h"
#include "surface.h"
#include "pi.h"

int main() {
  int r = 3;
  printf(" %d ", surface(r));
  printf(" %d ", circonference(r));
}
