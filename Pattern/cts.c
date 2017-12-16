/****************************************************************************
For input 3 print,
            1*2*3
            7*8*9
            4*5*6
*****************************************************************************/

#include <stdio.h>

int main(){
  int i, j, row, k=1;
  printf("No. of rows : ");
  scanf("%d", &row);
  for(i = 0; i < row; i += 2){
    k = 1;
    for(j = 0; j < row; j ++){
      printf("%d", row * i + k);
      k ++;
      if(j != row - 1){
        printf("*");
      }
    }
    printf("\n");
  }

  if(row % 2){
    i -= 2;
  }

  for(i --; i > 0; i -= 2){
    k = 1;
    for(j = 0; j < row; j ++){
      printf("%d", row * i + k);
      k++;
      if(j != row - 1){
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}
