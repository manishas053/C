// Program to extract passwords from the shadow file


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   FILE *fp1 = fopen("training-passwd.txt", "r");         //file to be merged is opened
   FILE *fp2 = fopen("training-shadow(1).txt", "r");      //file to be merged is opened
   FILE *fp3 = fopen("passwordfile.txt", "w");            //open file to which the result is stored
   char *value,buff1[400],buff2[400];

   while(((fgets(buff1, sizeof(buff1),fp2))!= NULL) && ((fgets(buff2, sizeof(buff2),fp1))!=NULL))
       {
         value = strtok(buff1, ":");
         fputs(value,fp3);
         fprintf(fp3,":");

         value = strtok(NULL, ":");
         fputs(value,fp3);
         fprintf(fp3,":");

         value = strtok(buff2, ":");
         value = strtok(NULL, ":");
         value = strtok(NULL, ":");
         fputs(value,fp3);
         fprintf(fp3,":");

         value = strtok(NULL, ":");
         fputs(value,fp3);
         fprintf(fp3,":");

         value = strtok(NULL, ":");
         fputs(value,fp3);
         fprintf(fp3,":");

         value = strtok(NULL, ":");
         fputs(value,fp3);
         fprintf(fp3,":");

         value = strtok(NULL, ":");
         fputs(value,fp3);

  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  return 0;
}
