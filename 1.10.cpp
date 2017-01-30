 #include <iostream>  
 #include <memory>

 int main()  
 {  
 	char a = 'a';
 	char* ptr_char = &a; // pointer to a character

 	int b[10]; // array of 10 integers     
 	for (int i=0; i<9; i++)      
 	{         
 		b[i]=i;     
 	}     
 	int* ptr_array_int = &b[0]; // pointer to an array of 10 integers

 	char c[5];     
 	for (int i=0; i<4; i++)     
 	{         
 		c[i]='g'+i;      
 	}      

 	char* ptr_array_char = &c[0]; // pointer to an array of character strings    

 	char** ptr_ptr_char = &ptr_char; // pointer to pointer to a character    

 	const int d = 5; // integer constant 
 	const int* ptr_const_int = &d; // pointer to an integer constant     

 	//int e =5;      
 	//const int* ptr_int = &e; // constant pointer to an integer
 }