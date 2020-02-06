#include <stdio.h>
#include <stdlib.h>
char name[20];
char num[5]; //last(5) is \0
int main()
{
    //printf("Enter name : ");
    //gets(name);
    //fgets(name, 20, stdin);
    //printf("name = %s",name);
    fgets(num, 5, stdin);
    int i = atoi(num), count = 0, j = 0; //array to int(funtion)
    double d = atof(num); //array to float
    //long l = atol(num); //array to long
    printf("number = %s , i = %f", num, d);
    //putchar(110); //putchar('n')
    int found = 0; //F
    float isExist = 0.0; //F
    char c= '\0'; //F
    // if( i > 0 && i < 10)
    //     print("if\n");
    // else if(i >= 10 || !found)
    //     printf("else if\n");
    // else
    //     printf("else\n");
     //while (count < i)
     {
        // printf("%d\n",count);
         // int c = 5 + count++;
         // int c = 5 + ++count; //fast
     }
    //for(j = 0; j < i; j++)
    {
       // printf("%d\n",j);
    }
    
}
