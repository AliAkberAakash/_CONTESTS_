/*
*
* Program Name: Word Scramble
* Details: UVA 483
* Solved By: Liverwort
* Date: 28.6.16
*
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char string[1000];
    char token[1000];

    gets(string);

    strcpy(token,strtok(string," "));

    strcpy(token, strrev(token));

    printf("%s", token);

   while( token != NULL )
   {
      strcpy(token, strtok(NULL," "));

      strcpy(token, strrev(token));

      printf(" %s", token);
   }


    return 0;
}

