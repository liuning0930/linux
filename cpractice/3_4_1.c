#include <unisted.h>
#include <string.h>
#include <stdlib.h>

void read_file(void);

int main() {
  if ((write(1, "Here is some data\n",18)) != 18) {
    write(2, "A write error has occurred on file descriptor 1\n", 46);
  }

  exit(0);

  return 0;
}

void read_file(void) {
  printf("%s\n", "hello world");
}
