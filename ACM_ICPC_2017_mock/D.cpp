#include<bits/stdc++.h>

using namespace std;

int largestSub(int arr[], int left, int right,int arrSize)
{
    int maxTillNow=0, maxi=0;
    vector <int> ansVector;

    for(int i=0; i<arrSize; i++)
    {
        if(arr[i]>=left && arr[i]<=right)
        {
            maxTillNow++;
        }
        else
        {
            if(maxTillNow>maxi)
            maxi=maxTillNow;
            maxTillNow=0;
        }
    }

    return maxi;
}

int main()
{
    int testCase,items,que,left,right;
    int perArray[100005];

    scanf("%d", &testCase);

    for(int i=0; i<testCase; i++)
    {
        printf("Case %d: ", i+1);
        scanf("%d %d", &items, &que);
        for(int j=0; j<items; j++)
            scanf("%d", &perArray[j]);
        for(int j=0; j<que; j++)
        {
            scanf("%d %d", &left,&right);

            int k=largestSub(perArray,left,right,items);
            printf("%d\n", k);
        }
    }

    return 0;
}
