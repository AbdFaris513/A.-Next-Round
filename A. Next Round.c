#include<stdio.h>
int main()
{
    int t,ava,i,j,counter=0;
    scanf("%d%d",&t,&ava);
    int arr[t+1];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<t;j++)
    {
        if(arr[ava-1]==0 && arr[ava-1]<arr[j])
        {
            if(arr[j]>arr[ava-1])
            {
                counter++;
            }
        }
    }
    for(j=0;j<t;j++)
    {
        if(arr[j]>=arr[ava-1] && arr[ava-1]>0)
        {

            counter++;
        }
    }
    printf("%d\n",counter);
    return 0;
}
/**
5 4
6 6 3 4 3 => 3

8 5
10 9 8 7 7 7 5 5  => 6

4 2
0 0 0 0   => 0

5 3
3 2 0 0 3  => 3
*/
