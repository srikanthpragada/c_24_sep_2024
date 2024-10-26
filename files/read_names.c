#include <stdio.h>


void main()
{
 FILE * fp;
 int ch;


      fp = fopen("names.txt", "rt");

      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1);
      }


      while(1)
      {
          ch = fgetc(fp);
          if(ch == EOF)   // End of file
              break;

          putch(ch);
      }

      fclose(fp);
}
