/**
Solved by: Ali Akber Aakash.
e-mail: ali852609@gmail.com
Date: 29.9.2016
**/

#include<stdio.h>

int main()
{
    long int d;

    while(scanf("%ld", &d)!=EOF)
    {
        while(1)
        {
          if(d==1)
          {
              printf("T--->1\n");
              break;
          }
          else if(d==2)
          {
              printf("T--->2\n");
              break;
          }
          else if(d==3)
          {
              printf("T--->3\n");
              break;
          }
          else if(d==4)
          {
              printf("T--->4\n");
              break;
          }
          else
            d=d-4;
        }
    }

    return 0;
}
