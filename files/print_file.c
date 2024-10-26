#include <stdio.h>


void main()
{
 FILE * fp;
 char filename[30];
 char line[100];
 char * p;
 int lineno = 1;



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
          // read a line
          p = fgets(line, 100, fp);

          if(p == NULL)  // EOF
            break;

          printf("%3d:%s", lineno, line);
          lineno ++;
      }

      fclose(fp);
}
