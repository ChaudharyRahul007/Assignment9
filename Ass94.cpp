/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int Choice,a,b,c;
    while (1)
    {
    printf("\n\n####################################\n");
    printf("\n\nEnter Your Choice:");
    printf("\n1. To check isosceles Tringle:\n");
    printf("\n2. To check Right angle tringle:\n");
    printf("\n3. To check Equilateral Tringle:\n");
    printf("\n4. Exit:\n");
    scanf("%d",&Choice);
    printf("Enter Length of 3 Sides Of Tringle\n");
    scanf("%d %d %d", &a,&b,&c);
    switch(Choice)
    {
        case 1:
              if(a==b||b==c||c==a)
              printf("isosceles");
              else
              printf("Not an isosceles");
              break;
         case 2:
              if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
              printf("Right tringle");
              else
              printf("Not a Right tringle");
              break;
         case 3:
              if(a==b||b==c)
              printf("Equilateral tringle");
              else
              printf("Not a Equilateral tringle");
              break;      
        case 4:
              exit(0);
              break;
       default:
              printf("Invalid Number\n:"); 
    }                                                                            
    }
    return 0;
}