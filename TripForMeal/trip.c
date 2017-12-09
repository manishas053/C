//#################################################################################################
// Winnie-the-Pooh does not like physical activity. He wants to have a meal n times,              #
// traveling minimum possible distance. Help him to find this distance.                           #
// First line contains an integer n — number of visits.                                           #
// Second line contains an integer a — distance between Rabbit's and Owl's houses.                #
// Third line contains an integer b — distance between Rabbit's and Eeyore's houses.              #
// Fourth line contains an integer c — distance between Owl's and Eeyore's houses.                #
// Output one number — minimum distance in meters Winnie must go through to have a meal n times.  #
//#################################################################################################

#include<stdio.h>
#include<stdlib.h>

#define min(x, y) ((x) < (y) ? (x) : (y))


int main() {
  int n, a, b, c, m, sum = 0;
  scanf("%d", &n);
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if(n == 1){
    printf("0\n");
  }
  else{
    m = min(a, min(b, c));
    sum = min(a, b) + (n - 2)*m;
    printf("%d\n", sum);
  }
  return 0;
}
