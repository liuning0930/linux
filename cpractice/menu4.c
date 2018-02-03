#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <term.h>
#include <curses.h>

static FILE *output_stream = (FILE *)0;

char *menu[] = {
  "a - add new record",
  "d - delete record",
  "q - quit",
  NULL,
};

int getchoice(char*, char*[], FILE *, FILE *)
{
  return 0;
}


int char_to_terminal(int);
