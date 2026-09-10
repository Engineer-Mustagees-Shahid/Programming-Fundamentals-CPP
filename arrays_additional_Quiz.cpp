#include<iostream>
using namespace std;
int main()
{
   int array[10];
   
   cout<<array<<endl;
   
   /* if we use array then we know that if we print only array variable then it prints
    the address of the first element.*/
    
    cout<<&array<<endl<<endl; // address of the whole array unit.
    
   /* in such both printing function both print same memory location because array means array[0]
      and address of whole array always same as the address of array[0] because in memory, the
	  array works same as work but two different terms meaning the address of array[0] is the same
	  as the address of the entire array, because the entire array starts at array[0]. */
	  
	float arr[10];
	
	cout<<arr<<endl;  // it represent adress of the arr[0].
	    
	cout<<&arr<<endl; // it represent address of the whole array as one unit.
	
	// Also produce same memory location as i mentioned above.
	    
	char odd[10];
	
	cout<<odd<<endl;  // no output.
	    
	cout<<&odd<<endl; // address of the whole array.
	
	/* In char data type it does not gave output when we write (cout<<odd) because when we use char
	   data type as array then it act as or we can say interprete as strings so the compiler try to 
	   print the first character of the string but there is no character in odd[0] so it remains blank.
	
	   if data type is int or float it prints a memory address of [0] not the elements of the array 
	   because its data type is int or float and in C,C++ the int and float does not treted as character
	*/ 
	    
	    
	return 0;
}