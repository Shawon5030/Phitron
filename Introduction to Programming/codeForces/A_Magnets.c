#include <stdio.h>
int main(){

    int t;
    int a=t;
    scanf("%d",&t);
    int count=1;
    int arr[t];
    for(int i=0;i<t;i++)scanf("%d",&arr[i]);

    for(int i=0;i<t-1;i++)
    {
        int f = arr[i]/10;
        int s = arr[i+1]/10;

        if(f!=s)count++;

    }

    printf("%d",count);
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> f604bd6cf3e3ae7663e23dba22da18dabc8565f7
