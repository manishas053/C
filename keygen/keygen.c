//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
//                                                                            ;;
//  Author  : Maneesha S                                                      ;;
//  Date    : 8 / 11 / 2017                                                   ;;
//  Program : C program to generate a valid license key for any user          ;;
//            (eg:- for a user abcd, the license key is abcd-bazy-cdef-dcba)  ;;
//                                                                            ;;
//;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
  int strLength, i, j, k;
  char* username;
  char chara;
  if (argc != 2) {
    printf("Invalid format\nUsage: ./run.sh <username>\n");
  }
  else{
    username = argv[1];
    strLength = strlen(username);
    for(i=0; i<strLength; i++) {
      chara = username[i];
      if(i%2 == 0) {
        for(j=0; j<=3; j++){
          printf("%c",chara+j);
        }
      }
      else {
        k=122;
        for(j=0; j<=3; j++){
          if(chara-j < 97) {
            printf("%c", k);
            k--;
          }
          else{
            printf("%c",chara-j);
          }
        }
      }
      if(i<strLength-1){
        printf("-");
      }
    }
    printf("\n");
  }
  return 0;
}
