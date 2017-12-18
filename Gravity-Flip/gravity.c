#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int arr[n], arr2[101] = {0};
	int arr3[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		arr3[i] = 0;
	}
	int flag = 1,j = 0;

	while(flag)	{
		flag = 0;
		for(i = 0; i < n; i++) {
			if(arr[i] > 0){
				arr2[j] ++;
				arr[i] --;
				flag = 1;
			}
		}
		j ++;
	}

	for(i = j - 2; i >= 0; i--)	{
		int x = n - 1;
		while(arr2[i]--)
			arr3[x--]++;
	}
	for(i = 0; i < n; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	return 0;
}
