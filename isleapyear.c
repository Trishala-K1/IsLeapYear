#include <stdio.h>
#include <stdlib.h>

int main() {
    int year;
    scanf("%d",&year);
    
    if (year % 400 == 0)
		printf("%d was a leap year", year);
	else if (year % 100 == 0)
		printf("%d was not a leap year", year);
	else if (year % 4 == 0)
		printf("%d was a leap year", year);
	else 
		return 0;
}
