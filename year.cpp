#include <stdio.h>
#include <time.h>
int main(){
	int currentYear;
	
	time_t now = time(NULL);
	struct tm *currentTime = localtime(&now);
	currentYear= currentTime->tm_hou;
	printf (currentYear);
	
	
}
