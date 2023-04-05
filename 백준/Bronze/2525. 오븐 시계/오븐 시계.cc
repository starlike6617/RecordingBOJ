#include <stdio.h>

int main()
{
    int h, m, t;
    scanf("%d %d\n%d", &h, &m, &t);
    int T = m + t;
        
    if (T < 60)
        printf("%d %d", h, T);
    else if (h + T / 60 <= 23)
        printf("%d %d", h + T / 60, T % 60);
    else
        printf("%d %d", (h + T / 60) - 24, T % 60);
}