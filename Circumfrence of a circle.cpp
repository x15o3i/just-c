/*Circumfrence of a circle*/
#include <stdio.h>
#define pi 3.142
int main(){
	float circumfrence,r;
	printf("Input radius --->");
	scanf("%f",&r);
	circumfrence = 2*pi*r;
	printf("The circumfrence is %.2f",circumfrence);
}
