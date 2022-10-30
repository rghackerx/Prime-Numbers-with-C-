// find the number is prime or not with while loop
#include <stdio.h>
#include <conio.h>
int main()
{
    int input, fact = 0;
    int a;

    printf("Enter the number you wanna check: ");
    scanf("%d", &input);

    a = 1;
    while (a <= input)
    {
        
        if (input % a == 0)
        {
            fact++;
        }
        a++;
    }
    if (fact == 2)
    {
        printf("This is a Prime number");
    }
    else
    {
        printf("This is not a prime number");
    }
    return 0;
}