#include <stdio.h>

int main(){
  int row, space, i, j, op;
  printf("Inverted(1) or straight(2) : ");
  scanf("%d", &op);
  printf("No. of rows : ");
  scanf("%d", &row);

  switch (op){
    case 1 :
    space = 1;
    for(i = row; i > 0; i--){
      for(j = 1; j <= space; j++){
        printf(" ");
      }
      for(j = 1; j<= i; j ++){
        printf("* ");
      }
      printf("\n");
      space++;
    }
    break;

    case 2 :
    space = row;
    for(i = 1; i <= row; i++){
      for(j = 0; j < space; j++){
        printf(" ");
      }
      for(j = 1; j <= i; j++){
        printf("* ");
      }
      printf("\n");
      space --;
    }
    break;
  }
  return 0;
}
