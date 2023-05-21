#include<stdio.h>
#define pi 3.142

int main(){
	float r,area;
	printf("Input Radius --->");
	scanf("%f",&r);
	area= pi*r*r;
	printf("The area will be --->%.2f",area);
}
