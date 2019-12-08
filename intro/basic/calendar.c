#include <stdio.h>
 void main()
 {
     int days;

    printf("Please enter how many days: \n");
    scanf("%d", &days);

    int years = days / 365;
    int weeks = (days % 365) / 7;
    days = days - years * 365 - weeks * 7;  

   printf("years: %d\n", years);
   printf("weeks: %d\n", weeks);
   printf("days: %d\n", days);
 }