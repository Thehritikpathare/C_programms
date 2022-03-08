//Ask user marks then show grade
#include<stdio.h>

int main()
{
    int marks;
    printf("Enter sum of your five sub. marks : ");
    scanf("%d",&marks);
    if(marks<0 || marks>500)
    {
        printf("\n You are type Worng marks.\n Try again......");
    }
    else if(marks<200)
    {
        printf(" \n You are Fail in this exam \n Try next time\n Thank you...... ");
    }
    else if(marks>=200 && marks<250)
    {
        printf("You are pass in Grade D");
    }
    else if(marks>=250 && marks<300)
    {
        printf("You are pass in Grade C");
    }
    else if(marks>=300 && marks<350)
    {
        printf("You are pass in Grade B");
    }
    else if(marks>=350 && marks<400)
    {
        printf("You are pass in Grade A");
    }
    else
    {
        printf("You are pass in Grade A+");
    }
}
		
