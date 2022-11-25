#include <stdio.h>

main()
{
    int n, ans, series = 9;
    printf("User Input : ");
    scanf("%d", &n);
    printf("Series = ");
    for (int i = 1; i <= n; i++)
    {
        ans += series;
        if (i <= n - 1)
        {
            printf("%d + ", series);
        }
        else
        {
            printf("%d", series);
        }// End if

        series = series * 10 + 9;
    }//End for
    printf("\n");
    printf("Sum = %d", ans);
}