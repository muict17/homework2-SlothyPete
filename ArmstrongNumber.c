#include <stdio.h>

int Power(int value ,int count)
{    
    int pow = 1;
    for (int i = 0; i < count; i++)
    {
        pow *= value;
    }
    
    return pow;

}

int main()
{
    int input;
    scanf("%d" ,&input);

    
    int counter = 0;
    int temp_input = input;
    while (temp_input > 0)
    {
        temp_input = temp_input / 10;
        counter++;
    }

    int sum = 0;
    int temp;
    int input_dummy = input;
    for (int i = 0; i < counter; i++)
    {
        temp = input_dummy % 10;
        sum = sum + Power(temp ,counter);
        input_dummy = input_dummy  / 10;
    }

    // printf("input is %d , sum is  %d \n" ,input ,)

    if (sum == input)
    {
        printf("This number can be Armstrong number");
    }
    else
    {
        printf("This number cannot be Armstrong number");
    }

    return 0;
}