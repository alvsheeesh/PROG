#include <stdio.h>

/*int main() //Exercise 1 
{
    int num1, num2, result;

    printf("1st num\n");
    scanf_s("%d", &num1);

    printf("2nd num\n");
    scanf_s("%d", &num2);

    if (num1 == num2)
    {
        result = num1 * num2;
        printf("The result is %d\n", result);
    }
    else if (num1 > num2)
    {
        result = num1 - num2;
        printf("The result is %d\n", result);
    }
    else 
    {
        result = num1 + num2;
        printf("The result is %d\n", result);
    } 
    return 0;
}*/

/*int main() //Exercise 2
{
    int num1, num2, num3;

    printf("Type 3 numbers:\n1.");
    scanf_s("%d", &num1);
    printf("Type 3 numbers:\n2.");
    scanf_s("%d", &num2);
    printf("Type 3 numbers:\n3.");
    scanf_s("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("The highest number is %d\n", num1);
    }
    
    else if (num2 > num1 && num2 > num3)
    {
        printf("The highest number is %d\n", num2);
    }
    
    else if (num3 > num1 && num3 > num2)
    {
        printf("The highest number is %d\n", num3);
    }

    else if (num1 == num2 && num2 == num3)
    {
        printf("All the numbers are the same");
    }
    return 0;
}*/     

/*int main() //Exercise 3
{
    int totalhours, plus40 = 40, mainpay = 800, extrapay;

    printf("How many hours did you work?\n");
    scanf_s("%d", &totalhours);

    if (totalhours > plus40)
    {
        extrapay = totalhours - plus40;
        printf("Your extra hours pay is %d", extrapay * 40);
        printf("\nYour total is %d", (extrapay * 40) + mainpay);
    }

    else
    {
        printf("You didn't make extra hours \nYour total is 800");
    }

    return 0;
}
*/

 int main() //Exercise 4
{
    int totalhours, plus40 = 40, mainpay = 800, extrapay;

    printf("How many hours did you work?\n");
    scanf_s("%d", &totalhours);

    if (totalhours > plus40)
    {
        extrapay = totalhours - plus40;
        printf("Your extra hours pay is %d", extrapay * 40);
        printf("\nYour total is %d", (extrapay * 40) + mainpay);
    }

    else
    {
        printf("You didn't make extra hours \nYour total is 800");
    }

    return 0;
}