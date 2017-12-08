//###################################################################################################
// Input line has 2 integers k and p                                                                #
// Find sum of first k zcy numbers and output this sum modulo p                                     #
// If a number is palindrome and the number of digits in it is even then it is called a zcy number  #
//###################################################################################################

#include <stdio.h>

int main(){
  int k, p, output, i, num, rem, reverse, sum = 0, count =0;
  scanf("%d %d", &k, &p);
  for(i = 11; i <= 1000; i ++){
    reverse = 0;
    num = i;
    for(num = i; num > 0; num = num / 10){
      rem = num % 10;
      reverse = reverse * 10 + rem;
    }
    if(reverse == i){
      count ++;
      if(count <= k){
        sum = sum + i;
      }
    }
  }
  output = sum % p;
  printf("%d\n", output);
  return 0;
}
