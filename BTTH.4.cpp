#include<stdio.h>

int main (){
	int n;
	printf("nhap so nguyen duong bat ki: ");
	scanf("%d", &n);
	for (int i=1; i <= n; i++){
		if (n % i == 0){
			printf("uoc cua (%d) la:%d \n",n, i);
		}
	}
	return 0;
}