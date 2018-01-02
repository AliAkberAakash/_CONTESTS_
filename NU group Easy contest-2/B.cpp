/*
* Solution to B - Booking a Room
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int no,room,d,a[101];

    scanf("%d %d", &no, &room);

    memset(a,0,sizeof(a));
    if(no==room)
        printf("too late\n");
    else
    {
        for(int i=0; i<room; i++)
        {
            scanf("%d", &d);
            a[d]=1;
        }
        for(int i=1; i<=no; i++)
        {
            if(!a[i])
            {
                printf("%d\n", i);
                break;
            }
        }
    }


    return 0;
}
