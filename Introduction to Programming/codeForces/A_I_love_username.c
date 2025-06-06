#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 1; i < n ; i++)
    {

        int max = 1;
        int min = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] <= arr[j])
            {
                max = 0;
                break;
            }
        }
        if (max == 1)
        {  
            count++;
        }
    

        for (int j = 0; j < i; j++)
            {
                if (arr[i] >= arr[j])
                {
                    min = 0;
                    break;
                }
            }
        
        if (min == 1)
        {   
            count++;
        }
        
        
    }

    printf("%d", count);
    return 0;
}