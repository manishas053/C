//#######################################################################################################
// One day Alex was creating a contest about his friends, but accidentally deleted it.                  #
// Fortunately, all the problems were saved, but now he needs to find them among other problems.        #
// write a program, which will determine if a problem is from this contest by its name.                 #
// It is known, that problem is from this contest if and only if its name contains one of Alex's        #
// friends' name exactly once. His friends' names are "Danil", "Olya", "Slava", "Ann" and "Nikita".     #
// Print "YES", if problem is from this contest, and "NO" otherwise.                                    #
//#######################################################################################################


#include<stdio.h>
#include<string.h>
int main(){
  int i, strLength, count = 0;
  char input[100000];
  gets(input);
  for(i = 0; i <= strlen(input); i++){
    if(i + 5 <= strlen(input)){
      if((input[i] == 'D') && (input[i + 1] == 'a') && (input[i + 2] == 'n') && (input[i + 3] == 'i') && (input[i + 4] == 'l'))
        count ++;
    }

    if(i + 4 <= strlen(input)){
      if((input[i] == 'O') && (input[i + 1] == 'l') && (input[i + 2] == 'y') && (input[i + 3] == 'a'))
        count ++;
    }

    if(i + 5 <= strlen(input)){
      if((input[i] == 'S') && (input[i + 1] == 'l') && (input[i + 2] == 'a') && (input[i + 3] == 'v') && (input[i + 4] == 'a'))
        count ++;
    }

    if(i + 3 <= strlen(input)){
      if((input[i] == 'A') && (input[i + 1] == 'n') && (input[i + 2] == 'n'))
        count ++;
    }

    if(i + 6 <= strlen(input)){
      if((input[i] == 'N') && (input[i + 1] == 'i') && (input[i + 2] == 'k') && (input[i + 3] == 'i') && (input[i + 4] == 't') && (input[i + 5] == 'a'))
        count ++;
    }
  }
  if(count == 1)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
