/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while (1)
    {
    printf("\n1. Addition:");
    printf("\n2. Subtraction:");
    printf("\n3. Multiplication:");
    printf("\n4. Division:");
    printf("\n5. Exit:");
    printf("\n\nEnter Your Choice:");
    
    scanf("%d",&x);
    switch(x)
    {
        case 1:
              printf("Enter Two Number:"); 
              scanf("%d%d",&a,&b);
              printf("\nAddition is = %d\n",a+b);
              break;
        case 2:
              printf("Enter Two Number:"); 
              scanf("%d%d",&a,&b);
              printf("\nSubtraction is = %d\n",a-b);
              break;
        case 3:
              printf("Enter Two Number:"); 
              scanf("%d%d",&a,&b);
              printf("Multiplication is = %d\n",a*b);
              break;
        case 4:
              printf("Enter Two Number:"); 
              scanf("%d%d",&a,&b);
              printf("\nDivision is = %d\n",a/b);
              break;
        case 5:
              exit(0);     
       default:
              printf("Invalid Number\n:"); 
    }                                                                            
                                                                                
    }
    return 0;
}