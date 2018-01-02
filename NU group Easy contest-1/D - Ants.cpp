#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,length,pos,mid,x;
    int least,most,lowest;

    scanf("%d", &t);


    for(int i=0; i<t; i++)
    {
        most=INT_MAX;
        least=INT_MIN;
        lowest=INT_MIN;

        scanf("%d %d", &length, &pos);
        mid=(length/2);

        for(int j=0; j<pos; j++)
        {
            scanf("%d", &x);
            if(x<most)
                most=x;
            else if(x>lowest)
                lowest=x;
            if(x<=mid && x>least)
            {
                least=x;
            }
            if(x>mid && (length-x)>least)
            {
                least=x;
            }
        }

        printf("%d ", length-least);
        if((length-most)>(lowest))
            printf("%d\n", length-most);
        else printf("%d\n", lowest);
    }



    return 0;
}
