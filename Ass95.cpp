/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");*/
#include<stdio.h>
int main()
{
    int var;
    printf("Enter A Number :\n");
    scanf("%d",&var);
    switch (var)
    {
    case 1: 
          if(var==1)
          printf("good");
        break;
     case 2: 
          if(var==2)
          printf("better");
        break;
      case 3: 
          if(var==3)
          printf("best");
        break;   
    default:
           printf("Invalid ");
        break;
    }
    return 0;
}
