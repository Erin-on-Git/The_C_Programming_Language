//Program to count blanks, tabs and newlines
#include<stdio.h>
int main()
{
    int c;
    int count=0;
    while ((c=getchar())!=EOF)
    {
        if (c==' ' || c=='\n' || c=='\t')
        {count++;}
    }
    printf("Count = %d\n",count);
}