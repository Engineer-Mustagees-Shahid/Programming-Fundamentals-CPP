#include<stdio.h>

int xstrlength(char*);

int main()
{
    char k[10];
    gets(k);
    int len=xstrlength(k);
    printf("%d",len);
    return 0;
}

int xstrlength(char *k)
    {
    	int length=0;
    	while(*k!='\0')
    	{
    		length++;
    		k++;
		}
		return length;
	}
