#include <stdio.h>

int main(){
  int row, i, j, op;
  printf("Inverted(1) or straight(2) : ");
  scanf("%d", &op);
  printf("Enter the no. of rows : ");
  scanf("%d", &row);
  switch (op){
    case 1 :
    for(i = row; i > 0; i--){
      for(j = 1; j <= i; j++){
        printf("%d ", j);
      }
      printf("\n");
    }
    break;

    case 2 :
    for(i = 1; i <= row; i++){
      for(j = 1; j <= i; j++){
        printf("%d ", j);
      }
      printf("\n");
    }
    break;
  }

  return 0;
}
