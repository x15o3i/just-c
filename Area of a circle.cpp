/*Area of a circle*/
#include <stdio.h> 
int main(){
	float r,area;
	printf ("Input radius --->");
	scanf("%f",&r);
	area= 3.142*r*r;
	printf("The area is %.2f",area);
	return 0;
}
