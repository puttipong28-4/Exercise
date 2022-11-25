#include <stdio.h>

int main()
{
    int arr[100], e, i, j, count;
    printf("Input number of element to be store in array : ");
    scanf("%d", &e);
    for (int i = 1; i <= e; i++)
    {
        printf("Element[%d] = ", i);
        scanf("%d", &arr[i]);
    } // end for
    for (int i = 1; i <= e; i++)
    {
        count = 1;
        for (j = i + 1; j <= e - 1; j++)
        {
            if (arr[i] == arr[j] && arr[i] != 0)
            {
                count++;
                arr[j] = 0;
            } // end if
        }     // end for
        if (arr[i] != 0)
        {
            printf("%d ->  %d\n", arr[i], count);
        } // end if
    }     // end for
}