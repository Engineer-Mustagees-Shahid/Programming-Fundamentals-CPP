/** ----------------------/\----------------------------------
         Name: M.Mustagees Shahid.
         Semester: BS SE1
         Course: Programming Fundamental.
         Subject: Arithematic type instructions.
         Type: Performing Operations.
         Program type: Run time initilization program.
    ---------------------(*_*)-------------------------------
    */
    
    #include<stdio.h>
    int main()
    {
    //Welcome notte.
    
       printf("\t\t\t\t\t\tWelcome in Taxino Calculator!\n\n\t\t\t\t\t\t\t   (*_$)\n\n");
  	// declaration of two integers.
    	
    	int value_1;
    	int value_2;
    	int Answer;
    	
	//Take values from users.
	
    	printf("\n\tPlease enter your First Value= ");
    	scanf("%d",&value_1);
    	printf("\n\tPlease enter your second value= ");
    	scanf("%d",&value_2);
    	
  	//Apply  operation on values.
    	
    	Answer=(value_1%value_2);
    	
    //Applying print funtiion to display the output.
	
	    printf("\n\t\t%.1d / %.1d and it's Remainer is %.2d\n\n",value_1,value_2,Answer);
			
    	
    	return 0;
    	
    	
	}
    
    