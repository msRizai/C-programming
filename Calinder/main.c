#include <stdio.h>
#include "stdlib.h"

// Function gits number of the year's days.
int first(int year){
    int day;
    day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
    return day;
}

// main
int main() {

	int i;
    system("color 79");
    int year,firstDay,weekday;
    printf("enter the year you want to see its calendar:\t");
    scanf_s("%d", &year);
    printf("\n\n");
    firstDay = first(year);// Sets the first day

    char *months[]={"January", "February","March", "April", "May", "June","July", "August", "September","October","November","December"};
    char *daysOfWeek[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (i = 0; i < 12; ++i) {

        printf("  ------------%9s-------------\n", months[i]);
        weekday=firstDay;
        int j;
        for (j = 0; j < 7; ++j) {//for printing sunday, monday , tuesday ...
            printf("  %s",daysOfWeek[j]);
        }
        printf("\n");
        for (j = 0; j < weekday; ++j) {
            printf("     ");
        }
        for (j = 1; j <= monthdays[i]; ++j) {//for printing days of month ...

            printf("   %2d",j);
            weekday++;
            if(weekday==7) {
                weekday = 0;
                printf("\n");
            }
        }
        firstDay=weekday;
        printf("\n\n\n");
    }
    system("PAUSE");
    return 0;
}