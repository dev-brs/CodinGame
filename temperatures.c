#include <stdlib.h>
#include <stdio.h>

int main()
{
    int max=5526;
    int index=0;
    int n;
    scanf("%d", &n);
    int temp[n];
    for (int i = 0; i < n; i++) {
        int t;
        scanf("%d", &t);
        temp[i]=t;
    }
    for (int i = 0; i < n; i++)
    {
        if(max>abs(temp[i]) || (max==abs(temp[i])&&temp[i]>0))
        {
            max=abs(temp[i]);
            index=i;
        }
    }
    printf("%d\n",temp[index]);
    return 0;
}