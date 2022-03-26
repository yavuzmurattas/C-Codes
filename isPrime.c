#include <stdio.h>

int isPrime( int ); // Function Prototype

int main(){
	
	int counter, value = 0; // The variables counter and value is initialized as zero to prevent wrong process
	printf("Please Input A Number To Be Controlled Whether Or Not It Is Prime\n");
	scanf("%d", &value); // The value got from the user is assigned to the variable value
	
	counter = isPrime( value ); // The function is called and the return value of the function is assigned
								//	to the varible counter to detect whether or not the number is prime number
	
	if( counter == 1 ){ printf("Your Number Is Not Prime"); } // If the counter is 1, then the number is not prime
	else{ printf("Your Number Is Prime"); } // If the counter is not 1, then the number is prime
	
	
	return 0;
}

int isPrime( int value ){	//	Function Definition
	
	int i, counter = 0;	// The variables counter and value is initialized as zero to prevent wrong process
	
	for( i = 2; i < value; i++ ){	// The process to detect whether or not the number is prime is begun
		
		if( value % i == 0 ){ counter = 1; }	//	If the number is prime, then 1, which is case
												//	regarding that it is prime or not, is assigned to
												//	the variable counter 
		
	}
	
	return counter;	// The value counter is returned to the variable counter in the main function1414
}
