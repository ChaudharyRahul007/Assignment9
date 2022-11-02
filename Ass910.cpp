/*10. C program to find all roots of a quadratic equation using switch case*/
#include<stdio.h>
#include<math.h>
int main()
{ 
    int a,b,c,D;
    float x,y;
    printf("Enter cofficient of x^2, x and constant term");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D<0)
    {
         case 1 : printf("Both roots are imaginary");
                    break;
          case 0 : switch(D==0)         
                  {
                    case 0:   printf("Both roots are equal");
                                  x=-b/(2.0*a);
                                   printf("Root is %f",x);  
                                   break;
                     case 1 :   switch(D>0)            
                              {
                                case 1 :  printf("Roots are real and distinct");
                                             x=(-b-sqrt(D))/(2*a);
                                             y=(-b+sqrt(D))/(2*a);
                                         printf("\nRoots are:%f,%f",x,y);
                                                 break;
                                 case 0 : printf(" Roots are not  real and Distinct");
                                           break;
                              }break;
                  }break;
    }    
    return 0;            
     }
