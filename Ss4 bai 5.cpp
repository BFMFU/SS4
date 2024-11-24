#include<stdio.h>
int main(){
	int num1, num2, num3 ;
	printf("Nhap vao so nguyen thu nhat: ");
	scanf("%d",&num1);
	printf("Nhap vao so nguyen thu hai: ");
	scanf("%d",&num2);
	printf("Nhap vao so nguyen thu ba: ");
	scanf("%d",&num3);
	if (num1<=num3<=num2 || num1>=num3>=num2) 
	printf("So %d nam giua so %d va so %d", num3, num1, num2);
	else printf("So %d khong nam giua so %d va so %d", num3, num1, num2);

	return 0 ;
}
