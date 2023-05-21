//Age of a person if inputs the year of his birth
#include <stdio.h>
#define currentYear 2023
int main(){
	int age,year;
	printf("Inputyour year of birth --->");
	scanf("%d", &year);
	age=currentYear-year;
	printf ("Your age is %d",age);
}
