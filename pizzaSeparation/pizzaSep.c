#include<stdio.h>
#include<math.h>

int main(){
  int n, i, j, x, start, end, b, kx, min, temp, sum1 = 0, sum2 = 0, diff = 0, a[100];
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  // for(i = 0; i < n; i++){
  //   for(j = i + 1; j < n; j++){
  //     if(a[i] > a[j]){
  //       temp = a[i];
  //       a[i] = a[j];
  //       a[j] = temp;
  //     }
  //   }
  // }
  if(n == 1){
     diff = 360;
     printf("%d\n", diff);
  }
  else if(n == 2){
    // if(a[0] > a[1]){
    //   diff = a[0] - a[1];
    //   printf("%d\n", diff);
    // }
    // else{
    //   diff = a[1] - a[0];
    //   printf("%d\n", diff);
    // }
    diff = a[0] - a[1];
    printf("%d\n", abs(diff));
  }
  // for(i = 1; i < n - 1; i++){
  //   sum1 = a[0] + a[n - 1];
  //   sum2 = a[1] + a[n - 2];
  // }
  else{
    min = 370;
    for (i = 0; i < n; i++){
  		start = i;
  		for (j = 0 ; j < n; j++){
  			x = 0;
  			start = i;
  			end = j;
  			if (start > end){
          temp = start;
          start = end;
          end = temp;
        }
  			for (kx = start; kx <= end; kx++){
  				x += a[kx];
  			}
  		  b = 2 * abs(x - 180);
  		  if (min > b)
  			 min = b;
  		}
  	}
    printf("%d\n", min);
  }

  return 0;
}
