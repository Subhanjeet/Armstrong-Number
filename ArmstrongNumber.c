#include <stdio.h>
#include <math.h>

int main()
{
    int number, count = 0, result = 0, cnt, rem;
    printf("Enter a number: ");
    scanf("%d", &number);
    int q = number;
    while (q != 0)
    {
        q = q / 10;
        count++;
    }
    cnt = count;
    q = number;
    while (q != 0)
    {
        rem = q % 10;
        result += pow(rem, cnt);
        q = q / 10;
    }
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}