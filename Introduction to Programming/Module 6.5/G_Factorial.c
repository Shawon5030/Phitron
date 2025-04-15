#include <stdio.h>
int main()
{

    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        long long fac = 1;
        if (N == 0 || N == 1)
            printf("1\n");
        else
        {

            for (int i = 1; i <= N; i++)
            {
                fac *= i;
            }
            printf("%lld\n", fac);
        }
    }

    return 0;
}