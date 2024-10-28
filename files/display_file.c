// Take filename on command-line and display its contents

#include <stdio.h>


void main(int argc, char * argv[])
{
 FILE * fp;
 char line[100];
 char * p;
 int lineno = 1;

      if(argc < 2)
      {
          printf("Sorry! Missing filename. Please provide filename on command-line!\n");
          printf(">display_file  <filename>");
          exit(2);
      }

      fp = fopen(argv[1], "rt");

      if(fp == NULL)
      {
          printf("Sorry! Could not open file [%s]", argv[1]);
          exit(1);
      }


      while(1)
      {
          // reads a line and returns NULL on EOF
          p = fgets(line, 100, fp);

          if(p == NULL)  // EOF
            break;

          printf("%3d:%s", lineno, line);
          lineno ++;
      }

      fclose(fp);
}
