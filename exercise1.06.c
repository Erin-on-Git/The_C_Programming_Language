//Program to check the value of EOF using getchar()
#include<stdio.h>
int main()
{
    int c;
    c=getchar();
    if((c!=EOF)!=0)
    {printf("Value of getchar()!=EOF is %d\n",1);}
    else
    {printf("Value of getchar()!=EOF is %d\n",0);}
}
