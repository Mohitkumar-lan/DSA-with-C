#include <stdio.h>

int main()
{
    int n, arr[100], target;
    int found = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Element found at index %d", found);
    else
        printf("Element not found");

    return 0;
}
