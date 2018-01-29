#include <stdio.h>
#include <string.h>

int main() {
  int x, i, p, q, r;
  char a[100];
  scanf("%s", a);
  if(a[0] == '1') {
    p = 1;
    q = 0;
    r = 0;
  }
  if(a[0] == '2') {
    p = 0;
    q = 1;
    r = 0;
  }
  if(a[0] == '3') {
    p = 0;
    q = 0;
    r = 1;
  }
  x = strlen(a);
  for(i = 1; i < (x + 1) / 2; i ++) {
    if(a[(2 * i)] == '1') {
      p ++;
    }
    if(a[( 2 * i)] == '2') {
      q ++;
    }
    if(a[( 2 * i)] == '3') {
      r ++;
    }
  }

  for(i = 0; i < p; i ++) {
    if(i == 0) {
      printf("1");
    }
    if(i > 0) {
      printf("+1");
    }
  }

  if(p == 0 && q != 0) {
    printf("2");
    for(i = 0; i < q - 1; i ++){
      printf("+2");
    }
  }

  if(p !=0 && q != 0) {
    for(i = 0; i < q; i ++)
      printf("+2");
  }

  for(i = 0; i < r; i ++) {
    if(p == 0 && q == 0) {
      if(i == 0) {
        printf("3");
      }
      for(i = 1; i < r; i ++)
        printf("+3");
    }
    if(p != 0 || q != 0) {
      printf("+3");
    }
  }
  return 0;
}
