#include <stdio.h>

int main()
{
    int arr[1000000], n, i, min, max;
    scanf("%d", &n);
    
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    min = arr[0];
    max = arr[0];
    
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    
    printf("%d %d", min, max);
    
    return 0;
}