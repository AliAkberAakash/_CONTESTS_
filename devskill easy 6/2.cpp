#include<stdio.h>
#include<string.h>


void manage(char a[], char b[])
{
    int l1=strlen(a),l2=strlen(b);

    if(l2<l1)
    l1=l2;

    for(int i=0; i<l1; i++)
    {
        if(a[i]>b[i])
        {
            char temp[10000];
            strcpy(temp,a);
            strcpy(a,b);
            strcpy(b,temp);
            break;
        }
    }
}

int main()
{
    int n,i,j,k;
    double numb[100000];
    char s[100][1000];

    scanf("%d", &n);

    getchar();

    for(i=0; i<n; i++)
    {
        gets(s[i]);

        scanf("%lf", &numb[i]);
        getchar();
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(numb[i]>numb[j])
            {
                int temp = numb[i];
                numb[i]=numb[j];
                numb[j]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(numb[i]==numb[j])
            {
                manage(s[i], s[j]);
            }
        }
    }

    for(i=0; i<n; i++)
        printf("%d. %s %.2lf\n", i+1, s[i], numb[i]);


    return 0;
}
