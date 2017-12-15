/****************************************************************************
For input 3 print,
            1*2*3
            7*8*9
            4*5*6
*****************************************************************************/

#include <stdio.h>

int main(){
  int i, j, row, res, k = 0, count = 0, m = 2;
  printf("No. of rows : ");
  scanf("%d", &row);
  for(i = 1; i <= row; i++){
    count = k;
    for(j = 1; j <= row; j++){
      if(i % 2 == 0){
        if(j < row/2){
          if(j == 1){
            res = m*row + 1;
          }
          printf("%d", res);
          res ++;
          m += 2;
        }
        else{
          if(j == 1){
            res = (m+1)*row+1;
          }
          printf("%d", res);
          res++;
          m -= 2;
        }
      }
      else{
        count++;
        printf("%d", count);
        k++;
      }
      if(j < row){
        printf("*");
      }
    }
    printf("\n");
  }
  return 0;
}
