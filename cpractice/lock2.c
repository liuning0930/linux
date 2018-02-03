#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

const char *lock_file = "/tmp/LCK.test2";

int main()
{
  int file_desc;
  int tries = 10;

  //第一次打开正常，然后进行第二次打开，因为文件已经被打开了，所以第二次失败，然后关闭file
  while (tries--) {
    file_desc = open(lock_file,O_RDWR | O_CREAT | O_EXCL, 044);
    if (file_desc == -1) {
      printf("%d - I have exclusive access\n",getpid());
      sleep(1);
      (void)close(file_desc);
      (void)unlink(lock_file);
      sleep(2);
    }
  }

  exit(EXIT_SUCCESS);
}
