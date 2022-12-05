#include<stdio.h>
int main()
{
    int a[10], i, sum = 0;
    printf("Enter Array Elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of Array Elements: %d", sum);
    return 0;
}