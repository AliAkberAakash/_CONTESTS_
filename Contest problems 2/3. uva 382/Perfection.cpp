/*
*
* Program Name: Perfection
* Details: uva 382
* Solved By: Liverwort
* Date: 26.6.16
*
*/

#include<iostream>
#include <iomanip>


int main()
{
    using namespace std;

    int a[60001], i,n,k,sum;

    cout<<"PERFECTION OUTPUT\n";

    while(cin>>n)
    {
        if(n==0)
            break;

        k=0;
        sum=0;

        for(i=1; i<60001; i++)
        {
            if((n%i==0)&&(n/i)!=1&&(n/i!=-1))
            {
                a[k]=i;

                //cout<<k<<" "<<a[k]<<" ";

                k++;
            }
        }

        for(i=0; i<k; i++)
            sum=sum+a[i];

            //cout<<sum<<"\n \n";

        if(sum==n)
            cout<<setw(6)<<n<<" PERFECT\n";
        else if(sum>n)
            cout<<setw(6)<<n<<" ABUNDANT\n";
        else
            cout<<setw(6)<<n<<" DEFICIENT\n";

    }

    cout<<"END OF OUTPUT\n";

    return 0;
}

