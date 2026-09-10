#include <stdio.h>

void romanise(int*,int,char,char[],int*);
int check_validity(int);

int main() {
    
    int year,check,index=0;
    char roman[100];
    
    printf("\nEnter the year :");
    scanf("%d",&year);
    check=check_validity(year);
    if(check==0)
    printf("\nInvalid year");
    if(check==1)
    {
    romanise(&year,1000,'M',roman,&index);
    romanise(&year,500,'D',roman,&index);
    romanise(&year,100,'C',roman,&index);
    romanise(&year,50,'L',roman,&index);
    romanise(&year,10,'X',roman,&index);
    romanise(&year,5,'V',roman,&index);
    romanise(&year,1,'I',roman,&index);
	}
	
	roman[index]='\0';
	printf("\nThe roman numeral is : %s",roman);
    
    
    return 0;
}

 int check_validity(int year)
{
	if(year>0 && year<50000)
	return 1;
	else 
	return 0;
}


void romanise(int *year, int k, char character, char roman[], int *index)
{
    int y;
    y=*year/k;
    
    for(int i=0; i<y; i++)
    {
        roman[*index]=character;
        (*index)++;
        
    }
    
    *year=*year%k;
    
}