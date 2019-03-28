#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  printf(1, "The readcount is %d\n", getreadcount());
  exit();
}
