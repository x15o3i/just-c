/*Volume of a cone*/
#include <stdio.h>
int main(){
	float volume,r,h;
	int mult;
	printf("Input radius --->");
	scanf("%f",&r);
	printf("Input height --->");
	scanf("%f",&h);
	mult= 3.142*r*r*h;
	volume =mult/3;
	printf("The Volume of the cone is %.2f",volume);
	
}
