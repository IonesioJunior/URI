#include<stdio.h>
int main()
{
    int i,j,m=1,count=0;
    double a[12][12],sum=0;
    char o;
    scanf("%c",&o);
    for(i=0 ; i<=11 ; i++)
    {
        for(j=0 ; j<=11 ; j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    for(i=0 ; i<=11 ; i++)
    {
        for(j=0 ; j<=11 ; j++)
        {
            if (j >= m && j <= 11 - m){
                sum+=a[i][j];
                count++;
            }
 
 
        }
        m++;
 
 
    }
    if(o=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/count);
 
    return 0;
}
