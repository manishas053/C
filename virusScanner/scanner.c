#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <crypt.h>

int main(){
  FILE *fp1,*fp2,*fp3;
  char *contents,*contents2,*hash,*hash2,buffer1[1000],buffer2[1000],buffer3[1000],cwd[1024],*name;
  DIR *d;
  struct dirent *dir;

  fp1 = fopen("hello","rb");
  fp2 = fopen("test.txt","w");
  fgets(buffer1,sizeof(buffer1),fp1);
    //hash the contents of hello
    hash = crypt(buffer1,"$1$GC");
    printf("First hash\t");
    printf("%s\n",hash);
    fputs(hash,fp2);
    fclose(fp1);
    fclose(fp2);

    //to get the current working directory
    getcwd(cwd,sizeof(cwd));

    //opens the cwd
    d = opendir(cwd);
    if (d)
    {
      while ((dir = readdir(d)) != NULL){
        name = dir->d_name;

        fp3 = fopen(name,"r");
        fgets(buffer2,sizeof(buffer2),fp3);
          //hash the contents of hello
          hash2 = crypt(buffer2,"$1$GC");
          fp2=fopen("test.txt","r");
          fgets(buffer3,sizeof(buffer3),fp2);
          if(strcmp(buffer3,hash2)==0){
            printf("%s\n",name);
          }
      }
      closedir(d);
    }

  //fclose(fp1);
  //fclose(fp2);
  fclose(fp3);
  return(0);
}
