/*
*
* Program Name:
* Details:
* Solved By: Liverwort
* Date:
*
*/

#include<iostream>


int main()
{
    using namespace std;

    int n, i, j, a[100], k, temp, count;

    cin>>n;

     while(n--)
     {
         cin>>k;

         for(i=1; i<=k; i++)
            cin>>a[i];

        count=0;

        for(i=1; i<=k; i++)
        {
            for(j=i+1; j<=k; j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                    count++;
                }
            }
        }

        cout<<"Optimal train swapping takes "<<count<<" swaps.\n";

     }


    return 0;
}

