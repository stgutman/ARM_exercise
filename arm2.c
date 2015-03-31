#include <stdio.h>
#include <string.h>

int count_ones(char *pointer_to_memory, int size_of_stream_in_bits){
	int i;
	int number_of_ones=0;	
	for(i=0; i<size_of_stream_in_bits; i++){
		if(pointer_to_memory[i] == '1')
			number_of_ones++;
	}
	return number_of_ones;
}

int main ()
{
	int number_of_ones=0;
	int size_of_stream_in_bits=5;
	int offset = 0;
	char bits[24] = "100111101110100001001110"; /*waste of 7/8 memory but easy programm*/
	number_of_ones = count_ones(bits+offset, size_of_stream_in_bits);
	printf("Number of ones = %d\n", number_of_ones);
	return 0;
}