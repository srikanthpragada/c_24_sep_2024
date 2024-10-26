#include <stdio.h>


void main()
{
 FILE * fp;
 char filename[30];
 int ch;

      printf("Enter filename :");
      gets(filename);

      fp = fopen(filename, "rt");

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
