// Write marks of 50 students into marks.dat

#include <stdio.h>
#define  FILENAME  "marks.dat"

void main()
{
 FILE * fp;
 int i, marks;


      fp = fopen(FILENAME, "wb");

      srand(time(0));
      for(i = 1; i <= 50; i ++)
      {
         marks = rand() % 100;
         fwrite(&marks, sizeof(marks), 1, fp);
      }


      fclose(fp);
}
