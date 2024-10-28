// Read marks of a student based on rollno from marks.dat

#include <stdio.h>
#define  FILENAME  "marks.dat"

void main()
{
 FILE * fp;
 int marks, count, pos, rollno;


      fp = fopen(FILENAME, "rb");
      printf("Enter rollno:");
      scanf("%d", &rollno);

      pos = (rollno - 1) * sizeof(int);

      // Move pointer to required location - random access
      fseek(fp, pos, SEEK_SET);

      count = fread(&marks, sizeof(int), 1, fp);

      if(count == 0) // EOF
            printf("Rollno is not found!");
      else
            printf("Marks : %d", marks);


      fclose(fp);
}
