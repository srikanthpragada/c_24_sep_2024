#include <stdio.h>


void main()
{
 FILE * fp;
 char name[20];
 int i;


      fp = fopen("names.txt", "wt");  // wt- write text

      for(i = 1; i <= 5; i ++)
      {
          printf("Enter name :");
          gets(name);
          // write to file
          fprintf(fp, "%s\n", name);
      }


      fclose(fp);
}
