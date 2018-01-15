#include<stdio.h>

int main(){
  int n, k, a, i;
  scanf("%d", &n);
  if((n % 2) == 0){
    a = n / 2;
    printf("%d\n", a);
    for(i = 1; i <= a; i++){
      printf("2 ");
    }
  }
  else if((n % 2) != 0){
    a = n / 2;
    printf("%d\n", (a));
    for(i = 1; i < a; i++){
      printf("2 ");
    }
    printf("3");
  }
  return 0;
}
