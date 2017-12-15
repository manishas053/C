
#include <stdio.h>

void bubble_sort(int list[], int n){
  int c, d, t;

  for (c = 0 ; c < ( n - 1 ); c++)  {
    for (d = 0 ; d < n - c - 1; d++)    {
      if (list[d] > list[d+1]){
        t = list[d];
        list[d] = list[d+1];
        list[d+1] = t;
      }
    }
  }
}

int c[5005];

int main(){
    int a[5005], n, i, d,j, swap;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble_sort(a, n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i]==a[j])
                c[i]++;
        }

    }
    bubble_sort(c,n);
    printf("%d",c[n-1]);
    return 0;
}
