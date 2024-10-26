#include <stdio.h>


void main()
{
 FILE * fp;

      fp = fopen("test.txt", "wt");  // write text

      // write to file
      fprintf(fp, "Hello!!");

      fclose(fp);
}
