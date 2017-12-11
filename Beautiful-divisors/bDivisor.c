//###################################################################################################
//
//
//
//
//


#include <stdio.h>
#include <math.h>

int main(){
  int num, k = 1, value, arr[1000], max, i, p;
  scanf("%d", &num);
  // value = pow(2, 2);
  // printf("%d", value);
  for(i = 1; i < num; i++){
    if(num % i == 0){
      for(k = 1; k < num; k++){
        value = (pow(2, k) - 1) * (pow(2, k - 1));
        if(i == value){
          arr[p] = i;
          p++;
        }
      }
    }
  }
  max = arr[0];
  for(i = 1; i < 1000; i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  printf("%d", max);
  return 0;
}
