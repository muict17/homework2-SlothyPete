#include <stdio.h>

int main()
{
    float hour, minute;
    printf("input hour : ");
    scanf("%f" ,&hour);
    printf("input minute : ");
    scanf("%f" ,&minute);
    
    if (hour >= 12)
    {
        hour = hour - 12;
    }

    float degree_hour;
    float degree_minute;

    degree_hour = (60*hour + minute) / 2 ;
    degree_minute = 6*minute;

    float greater_degree;
    float degree_DELTA;

    
    
    
    if (degree_hour == degree_minute )
    {
        degree_DELTA = 0;
        printf("Delta of degree is : %.0f" ,degree_DELTA);
    }
    else if (degree_minute > degree_hour)
    {
        greater_degree = degree_minute;
        printf("Delta of degree is : %.0f" ,greater_degree - degree_hour);
    }
    else
    {
        greater_degree = degree_hour;
        printf("Delta of degree is : %.0f" ,greater_degree - degree_minute);
    }
    
    
    return 0;
}