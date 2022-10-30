// programe to check a number is prime or not using for loop
//xample :- prime number = 1,2,3,5,7 (which are completely divisible by only 1 and itself)
#include <stdio.h>
#include <conio.h>
int main()
{
    int input, i, fact = 0;
    printf("Enter the number you wanna check: ");
    scanf("%d", &input);

    for (i = 1; i <= input; i++)
    {
        if (input % i == 0)
        {
            fact++; //here, fact variable will only increase when it gives 0 reminder
                    // and if it is a prime no. for example 7 then 0 reminder is only comes at 1 or 7
                    // so , fact varible will increase only two times.
        }
    }
    if (fact == 2) 
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }

    return 0;
}