#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int len = n;
    int arr[n];

    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    double sum=0;
    int count =0;
    while (n--)
    {
       sum+=arr[count];
       count++;
    }
    
   double result = sum/len;
    printf("%.12lf",result);
    return 0;
}