/*
	input: 	2/5/1995
	output: nhan du lieu tuong uong cho bien d, m, y
			In ra man hinh dinh dang 02/05/1995
*/
#include<stdio.h>

int main(){
	int d, m, y;
	char c;
	printf("Nhap ngay thang nam(dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d, &m, &y);
	printf("KQ: %2d/%2d/%4d", d, m, y);
	
	return 0;
}
