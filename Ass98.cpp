/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement*/
#include<stdio.h>
int main()
{
    int x,a;
    while (1)
    {
    printf("\n1.Convert a Positive no into Negative no:");
    printf("\n2.Convert to negative to positive : ");
    printf("\n\nEnter A Choice:");
    scanf("%d",&x);
    switch(x)
    {
        case 1 : 
            printf("Enter A Number:\n");
            scanf("%d",&a);
           printf("Positive No to Negative No %d",-a);
           break;
        case 2 :
            printf("Enter A Negative number:");
            scanf("%d",&a);
            printf("Negative to Positive no %d",a);
            break;   
    }
  return 0;
    }
}