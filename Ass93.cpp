/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Week day  Number:");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
              printf("today is Monday"); 
              break;
       case 2:
              printf("Today is tusday");
              break; 
       case 3:
              printf("Today is Wednesday"); 
              break;
       case 4:
              printf("Today is Thursday"); 
              break;
       case 5:
              printf("Today is friday"); 
              break;
       case 6:
              printf("Today is Saturday"); 
              break;
       case 7:
              printf("Happy Day......!"); 
              break;
     default:
              printf("Invailid Number:");                                                                             
    }
    return 0;
}