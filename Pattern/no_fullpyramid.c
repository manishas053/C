#include <stdio.h>

int main(){
  int row, op, i, j, space, num ;
  printf("Inverted(1) or straight(2)");
  scanf("%d", &op);
  printf("No. of rows : ");
  scanf("%d", &row);
  switch(op){
    case 1:
    space = 1;
    for(i = row; i >= 1; i--){
      for(j = 0; j < space; j++){
        printf(" ");
      }
      for(j = 1; j <= i; j++){
        printf("%d ", num);
        num++;
      }
      printf("\n");
      space += 1;
    }
    break;

    case 2:
    space = row;
    for(i = 1; i <= row; i++){
      for(j = 0; j < space; j++){
        printf(" ");
      }
      for(j = 1; j <= i; j++){
        printf("%d ", num);
        num++;
      }
      printf("\n");
      space = space-1;
    }
    break;
  }
  return 0;
}
