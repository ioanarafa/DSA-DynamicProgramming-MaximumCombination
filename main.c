#include <stdio.h>
#include <stdlib.h>
//nr de compinatii pentru a reprezenta o suma cu monedele date
int dp(int *M,int suma, int n)
{
    int v[suma+1];
    v[0]=1;
    for(int i=1;i<=suma;i++)
        v[i]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=suma;j++)
        {
            if(j>=M[i])
            v[j]+=v[j-M[i]];
        }
    }
    return v[suma];
}

int main()
{
    int suma;
    int minim;
    int n=3;
    int M[]={1,2,5};
    scanf("%d",&suma);
    minim=dp(M,suma,n);
    printf("%d",minim);
    return 0;
}
