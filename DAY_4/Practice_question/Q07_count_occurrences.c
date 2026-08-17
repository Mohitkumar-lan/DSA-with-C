#include <stdio.h>

int firstOccurrence(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            answer = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return answer;
}

int lastOccurrence(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            answer = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return answer;
}

int main()
{
    int n, key;
    int arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int first = firstOccurrence(arr, n, key);
    int last = lastOccurrence(arr, n, key);

    if (first == -1)
        printf("0\n");
    else
        printf("%d\n", last - first + 1);

    return 0;
}