//volume of a pyramid
#include <stdio.h>
int main(){
	float h,area,volume;
	printf("Input height --->");
	scanf("%f",&h);
	printf("Input Area --->");
	scanf("%f",&area);
	volume= area*h/3;
	printf("The volume of the cone is %.2f", volume);
	
}
