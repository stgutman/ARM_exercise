#ifndef HEADER_FILE
#define HEADER_FILE

#define SetBit(bits,k)     ( bits[(k/32)] |=  (1 << (k%32)) )
#define ClearBit(bits,k)   ( bits[(k/32)] &= ~(1 << (k%32)) )            
#define TestBit(bits,k)    ( bits[(k/32)] &   (1 << (k%32)) )

int count_ones(int *pointer_to_memory, int size_of_stream_in_bits);

#endif