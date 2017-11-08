//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crypt.h>

int main(){
  FILE *fp1 = fopen("top250.txt", "r");
  FILE *fp2 = fopen("passwordfile.txt","r");
  FILE *fp3 = fopen("allcrackedpasswords.txt","w");
  char *value,*hash,*name,*hash2,buff1[10000],buff2[1000];
  int cmp;

  while((fgets(buff1, sizeof(buff1),fp1))!= NULL){

    value = strtok(buff1, "\t");
    value = strtok(NULL, "\t");
    value = strtok(NULL, "\t");
    value = strtok(NULL, "\n");
    hash = crypt(value,"$1$GC");

    fp2 = fopen("passwordfile.txt","r");
    while((fgets(buff2, sizeof(buff2),fp2))!=NULL){
      name = strtok(buff2, ":");
      hash2 = strtok(NULL, ":");
      cmp = strcmp(hash2,hash);
      if(cmp==0){
        fputs(name,fp3);
        fprintf(fp3,":");
        fputs(value,fp3);
        fprintf(fp3,"\n");
      }

    }

  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
}
