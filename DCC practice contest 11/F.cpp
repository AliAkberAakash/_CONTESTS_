#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<string>
#include<sstream>

using namespace std;


int main()
{
    int n,a[10000],i;

    string S;
    char** b= (char**) malloc(sizeof(char*)*100);
    char str1[10000],str2[10000];
    char* kk= (char*) malloc(1000);

    scanf("%d", &n);
    getchar();
    getchar();

    while(n--)
    {
        //getline(cin,k);
        scanf("%[^\n]s", str1);
        //fgets (str1, 1000, stdin);
        //gets(str1);
        getchar();

        //strcpy(str1, k.c_str());

        kk=strtok(str1," ");

        for(i=0; i<100; i++)
            b[i]=(char*)malloc(100);

        i=0;

        while(kk!=NULL)
        {
            a[i]=atoi(kk);
            kk=strtok(NULL," ");
            i++;
        }

        //getline(cin,k);
        scanf("%[^\n]s", str2);
        //fgets (str1, 1000, stdin);
        //gets(str1);
        getchar();

        //strcpy(str1, k.c_str());

        i=0;

        istringstream iS(str2);

        while(iS >> S)
        {
            strcpy(b[a[i++]], S.c_str());
        }

        for(int j=1; j<=i; j++)
            printf("%s\n", b[j]);
        if(n)
        printf("\n");

        getchar();

    }


    free(kk);
    free(b);

    return 0;
}
