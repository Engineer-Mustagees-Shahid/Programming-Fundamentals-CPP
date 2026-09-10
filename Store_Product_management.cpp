#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	cout<<" \n\t\t\t\t\t\t\t\tManual of store product management of 10 items \n\n\n "<<endl;
	char choice;
	int add_product,remove_product,find_product,update_product;
	int inventory[10]={0,0,0,0,0,0,0,0,0,0};
	
do{
	
      cout<<" \n To view inventory Enter '1' "<<endl;
      cout<<" \n To add stock Enter '2' "<<endl;
      cout<<" \n To remove stock Enter '3' "<<endl;
      cout<<" \n To Find Product Enter '4' "<<endl;
      cout<<" \n To Update Stock Enter '5' "<<endl;
      cout<<" \n "<<endl;
     cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl; 
      
      cout<<"\n\n Enter your choice :";
      cin>>choice;
      
      switch(choice){
      	
      	
    case '1':
             for(int i=0;i<10;i++)    		
             {
            	cout<<"\n Item "<< i+1 <<" stock "<<inventory[i]<<endl;
			 }
		 cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl;	 
      	break;
      	
    case '2':
      		int add;
      		cout<<"\n In which item you add stock : ";
      		cin>>add;
      		
            if(add>=1 && add<=10)
        {
			cout<<"\n Number of stock you added :";
            cin>>add_product;
            inventory[add-1]+=add_product;
                        for(int i=0;i<10;i++)    		
             {
            	cout<<"\n Item "<< i+1 <<" stock "<<inventory[i]<<endl;
			 }
			 
        }
           else 
		    cout<<"\n There is no such item "<<endl;
		    
		    cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl;        
			  break;
      	  
    case '3':
      		int remove;
      		cout<<"\n From which Item you removed the stock :";
      		cin>>remove;
      		
      		if(remove>=1 && remove<=10)
      		{
      			cout<<"\n Remove the Saleout or damage Stock :";
      			cin>>remove_product;
      			if(remove_product>=0)
      			inventory[remove-1]-=remove_product;
      			else
      			cout<<" \n Stock of this Itemis already zero "<<endl;
      			
      			for(int i=0;i<10;i++)
      			{
      				cout<<"\n Item "<<i+1<<" Stock "<<inventory[i]<<endl;
				  }
     	
			  }
      		
	        else 
	            cout<<" \n Please Read the manual Carefully to Run the store stock system "<<endl;
              cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl; 
            break;
            
    case '4' :
         		
         	cout<<"\n Which Product you find :";
         	cin>>find_product;
         	if(find_product>=1 && find_product<=10)
         	cout<<"\n Item "<<find_product<<" Stock "<<inventory[find_product-1]<<endl;
            else 
                cout<<" \n Please Read the manual Carefully to Run the store stock system "<<endl;
          cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl;        
	        break;
	
	case '5':
		    int update;
		    
	         cout<<"\n Which item's stock wnat to updated  :";
	         cin>>update_product;

	         if(update_product>=1 && update_product<=10)
	     {
			 cout<<"\n Number of stock is :";
	         cin>>update;
	         inventory[update_product-1]=update;
	         	         for(int i=0;i<10;i++)
	         {
	         	cout<< "\n Item "<<i+1<<" Stock "<<inventory[i]<<endl;
			 }
	    }
	         else 
	         cout<<"\n\n Enter Valid Item number "<<endl;
	         
		cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl;        	 
	         break;
	
	   default :
	   	 cout<<"\n Please Read the manual Carefully to Run the store stock system "<<endl;
	   cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl;        
}	
	
	
	char choice_2[10];
	cout<<"\n Do you want to maintain store Enter 'Yes' Otherwise 'No' : ";
	cin>>choice_2;
	if(strcmp(choice_2,"No")==0)
	{
    return 0;
    }
    else if(strcmp(choice_2,"no")==0)
	{
	return 0;
	}
	else if(strcmp(choice_2,"Exit")==0)
	{
	return 0;
	}
	else if(strcmp(choice_2,"exit")==0)
	{
	return 0;
	}
	 cout<<"-------------------------------------------------------------------------WAITING$FOR$YOUR$CHOICE$---------------------------------------------------------"<<endl;        
}while(true);
	
	return 0;
}