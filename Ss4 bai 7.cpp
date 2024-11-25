#include<stdio.h>
int main(){
	int numb;
	printf("Nhap nam ma ban muon kiem tra: ");
	scanf("%d",&numb);
	if (numb%4==0 && numb%100!=0 || numb%400==0) 
	printf("Day la nam nhuan ");
	else printf("Day khong phai la nam nhuan ");
	return 0 ;
}
