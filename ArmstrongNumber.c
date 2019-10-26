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
    for (int i = 0; i < counter; i++)
    {
        temp = input % 10;
        sum = sum + Power(temp ,counter);
        input = input  / 10;
    }

    printf("%d" ,sum);


    return 0;
}