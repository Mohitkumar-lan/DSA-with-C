#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char words[20][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%99s", words[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strlen(words[j]) > strlen(words[j + 1]))
            {
                char temp[100];

                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}