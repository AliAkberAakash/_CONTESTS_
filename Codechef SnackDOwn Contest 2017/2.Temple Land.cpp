/*
* Solution to Snake Precession (Codechef SnackDown contest 2017)
* Solved by: Team Lovers Nest
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>

int main ()
{
    int t,n;
    int a[1000];

    scanf("%d", &t);

    while(t--)
    {
        int i,j;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
            scanf("%d", &a[i]);

        if(n%2)
        {
            int x,k=n/2;
            x=1;

            bool f=true;
            for(i=0,j=n-1; i<k; i++,j--)
            {
                if(a[i]!=x||a[j]!=x)
                {
                    f=false;
                    break;
                }
                x++;
            }
            if(f)
                printf("yes\n");
            else
                printf("no\n");
        }
        else
        {
            printf("no\n");
        }
    }


    return 0;
}


