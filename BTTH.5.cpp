#include <stdio.h>
#include <math.h>


int main() {
    int n;
    printf("nhap so nguyen bat ki: ");
    scanf("%d", &n);

	int prime = 1;

	for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = 0;
        }
    }

	if(prime == 1)
	{
		printf("%d la so nguyen to", n);
	}else {
       printf("%d khong phai la so nguyen to!\n", n);
    }

    return 0;
}