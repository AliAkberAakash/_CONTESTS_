#include<bits/stdc++.h>

using namespace std;

int main()

{
    char str[100002];
    scanf("%s", str);
    int len = strlen(str);
    int i, j, counter;
    for(i = 1; i <= len / 2; ++i)
    {
        for(j = i, counter = 0; j < len; ++j)
        {
            if (str[j] == str[j - i])
                counter++;
            else
                counter = 0;
            if (counter == i)
            {
                counter = 0;
                memmove(str + j - i, str + j, (len - j) * sizeof(char));
                j -= i;
                len -= i;
            }
        }
        str[j] = 0;

    }

    printf("%s\n", str);
}
