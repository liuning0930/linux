#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <sys/un.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argv, char *args[])
{
  int sockfd;
  int len;
  struct sockaddr_un address;
  int result;
  char ch = 'A';
  sockfd = socket(AF_UNIX, SOCK_STREAM, 0);
  address.sun_family = AF_UNIX;
  strcpy(address.sun_path, "server_socket");
  len = sizeof(address);
  
  result = connect(sockfd, (struct sockaddr *)&address, len);

  if (result == -1) {
    perror("oops: client1");
    exit(1);
  }

  write(sockfd, &ch, 1);
  read(sockfd, &ch, 1);
  printf("char form server = %c\n", ch);
  close(sockfd);
  exit(0);
}
