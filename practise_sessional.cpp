#include<stdio.h>

void identify(void);

int main()
{

    identify();


	return 0;
	
}






void identify(){
	
	char input;
	scanf("%c",&input);
	if(input>=65 && input<=90)
	printf("you entered the upper case letter");
	else if (input>=97 && input<=122)
	printf(" you entered the small case letter");
	else if(input>=48 && input<=57)
	printf(" you entered the the whole number");
	else 
        printf("you entered the speciaL symbol");   
		
	
}

/*
int main() {
	
	 char choice;
do{
	
int number=1;
int rows=4;
printf("\n Enter how many time you start the loop :");
scanf("%d",&rows);
printf("\n");
for(int i=1;i<=rows;i++){
	
	for (int j=1;j<i;j++)
	{
		printf("*");
	}
  	printf("%d",i);
 
	for(int j=i;j<rows;j++)
	{
    printf("*");
}

	printf("\n");	
}
           
    printf("\n\n Do you  want to continue enter y othervise n : ");
    fflush(stdin);
    scanf("%c",&choice);
}
while (choice == 'y');
    return 0;
}

*/
/*
#include <stdio.h>

int main() {
    int rows = 4; 

    
    for (int i = 1; i <= rows; i++) {
     
        for (int j = 1; j < rows; j++) {
           
            printf("%d", i);
          
            for (int k = 1; k <= i; k++) {
                printf("*");
            }
        }
       
        printf("\n");
    }

    return 0;
}

*/




