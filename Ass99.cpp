/*9. Program to Convert even number into its upper nearest odd number
Switch Statement*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1: 
               printf("Upper Nearest Odd Number: %d",x+1);
               break;
        case 0 : 
               printf("Upper Nearest Odd Number: %d",x) ;
               break;         

    }
    return 0;
}