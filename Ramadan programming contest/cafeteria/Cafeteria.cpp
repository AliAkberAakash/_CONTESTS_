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

    int n,u,un,i,t1,t2;

    while(cin>>n)
    {
        t1=0;
        t2=0;

        for(i=0; i<n; i++)
            {
                cin>>u>>un;

                t1=t1+u;
                t2=t2+un;
            }

            cout<<t2-t1<<"\n";

    }


    return 0;
}

