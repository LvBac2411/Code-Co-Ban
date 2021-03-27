#include<stdio.h>

int code(int i) {
	for(int j=0; j<10; j++) {
		printf("%d ", i+j);
		if(i == 0) printf(" ");
	}
	printf("\n");
	i+=10;
	(i<100) ? code(i) : i;
}

int main() {
	code(0);
	return 0;
}
