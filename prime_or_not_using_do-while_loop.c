//find the no is prime or not with do-while loop
#include<stdio.h>
#include<conio.h>
int main()
{
    int input,a,fact=0;

    printf("Enter the number you wanna check: ");
    scanf("%d",&input);

    a=1;
    do
    {
       
        if (input%a==0)
        {
            fact++;
        }
         a++;
       
    } while(a<=input);
    
    if (fact==2)
    {
        printf("THIS IS A PRIME NUMBER");
    }
    else
    {
        printf("THIS IS NOT A PRIME NUMBER");
    }
    return 0;
    
}