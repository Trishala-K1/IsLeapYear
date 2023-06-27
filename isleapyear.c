#include <stdio.h>
#include <stdlib.h>

int main() {
    int year;
    scanf("%d",&year);
    
    if(year % 4 == 0) {
        if(year % 100 != 0 || year % 400 == 0) {
            printf("%d was a leap year\n", year);
        } else {
            printf("%d was not a leap year\n", year);
        }
    } else {
        printf("%d was not a leap year\n", year);
    }

    return 0;
}
