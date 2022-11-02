/*1. Write a program which takes the month number as an input and display
number of days in that month.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter A Month Number:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
              printf("January\n Number Of Days:- 31"); 
              break;
       case 2:
              printf("February\n Number Of Days:- 29");
              break; 
       case 3:
              printf("March\n Number Of Days:- 31"); 
              break;
       case 4:
              printf("April\n Number Of Days:- 30"); 
              break;
       case 5:
              printf("May\n Number Of Days:- 31"); 
              break;
       case 6:
              printf("June\n Number Of Days:- 30"); 
              break;
       case 7:
              printf("July\n Number Of Days:- 31"); 
              break;
       case 8:
              printf("August\n Number Of Days:- 30"); 
              break;
       case 9:
              printf("September\n Number Of Days:- 31"); 
              break;
       case 10:
              printf("October\n Number Of Days:- 30"); 
              break;
       case 11:
              printf("November\n Number Of Days:- 31"); 
              break;
       case 12:
              printf("December\n Number Of Days:- 31"); 
              break; 
       default:
              printf("Invailid Number:");                                                                             
    }
    return 0;
}