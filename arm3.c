#include <stdio.h>
#include <string.h>
#include "arm3.h"

int main ()
{
	int number_of_ones=0;
	int size_of_stream_in_bits=6;
	int offset = 0;
	
	int bits[2];     // This is our bit array (32×2 = 64 bits !)
    	int i;
    
    	for ( i = 0; i < 2; i++ )
		bits[i] = 0;                    // Clear the bit array            
    
    	SetBit( bits, 0 );
	SetBit( bits, 1 );  	
    	SetBit( bits, 3 );
    	SetBit( bits, 5 );
	SetBit( bits, 7 );
	SetBit( bits, 9 );
	
	number_of_ones = count_ones(bits+offset, size_of_stream_in_bits);
	printf("Number of ones = %d\n", number_of_ones);
}

int count_ones(int *pointer_to_memory, int size_of_stream_in_bits){
	int i;
	int number_of_ones=0;
	for(i=size_of_stream_in_bits+1; i!=0; --i){
		if(TestBit(pointer_to_memory,i))
			number_of_ones++;
	}
	return number_of_ones;
}
