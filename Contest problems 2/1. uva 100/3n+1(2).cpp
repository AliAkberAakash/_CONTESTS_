/*
*
* Program Name: The 3n+1 Problem
* Details: UVA 100
* Solved By: Liverwort
* Date: 23.6.16
*
*/

#include<iostream>


int main()
{
    using namespace std;

    int i,a,b,n,c,max;

    while(cin>>a>>b)
   {
       max=-100000;

    if(a<b)   {
    for(i=a; i<=b; i++)
    {
        n=i;
        c=0;
        step2:

        c++;

        if (n==1)
        {
            if(c>max)
                max=c;
            continue;
        }
        if(n%2!=0)  n=3*n+1;
        else        n=n/2;

        goto step2;

    }

}

else
    {
    for(i=b; i<=a; i++)
    {
        n=i;
        c=0;
        step3:

        c++;

        if (n==1)
        {
            if(c>max)
                max=c;
            continue;
        }
        if(n%2!=0)  n=3*n+1;
        else        n=n/2;

        goto step3;
    }
}

    cout<<a<<" "<<b<<" "<<max<<"\n";
   }

    return 0;
}

