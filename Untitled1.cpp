#include<stdio.h>

int main() {
	int a=1, b=2;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("so a la:%d", a);
	printf("\nso b la:%d", b);
}
