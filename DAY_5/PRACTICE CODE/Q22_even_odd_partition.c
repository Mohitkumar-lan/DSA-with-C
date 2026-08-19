#include <stdio.h>

int main()
{
    int n, arr[100];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int left = 0;
    int right = n - 1;

    while(left < right)
    {
        while(left < right && arr[left] % 2 == 0)
            left++;

        while(left < right && arr[right] % 2 != 0)
            right--;

        if(left < right)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}