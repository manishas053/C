#include <stdio.h>

int main(){
  int row, i, j, chara;
  printf("No. of rows : ");
  scanf("%d", &row);
  for(i = 1; i <= row; i++){
    chara = 65;
    for(j = 0; j < i; j++){
      printf("%c ", chara);
      chara++;
    }
    printf("\n");
  }
  return 0;
}
