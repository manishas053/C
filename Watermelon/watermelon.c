#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if(n % 2 == 0) {
    printf("YES");
  }
  else if(n == 2) {
    printf(" NO");
  }
  else {
    printf("NO");
  }
  return 0;
}
