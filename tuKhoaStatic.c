/*
	static co 3 loai la: bien cuc phuong, bien toan cuc, ham
*/
#include<stdio.h>

void tang(int *a){
	static int b = 0;
	*a = *a + b;
	b++;
}

int main(){
	int a = 10;
	tang(&a);
	printf("KQ: %d\n", a);
	tang(&a);
	printf("KQ: %d\n", a);
	
	return 0;
}
