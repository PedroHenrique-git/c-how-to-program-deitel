#include<stdio.h>
#include<limits.h>

void displayBits( unsigned value );

int main ( void ) {
	unsigned x;
	
	printf("Digite um inteiro sem sinal:  ");
	scanf("%u", &x);
	
	displayBits(x);
}

void displayBits( unsigned value ) {
	unsigned c;
	
	//unsigned displayMask = 1 << 31;
	unsigned displayMask = CHAR_BIT * sizeof(unsigned) - 1;
	
	printf("%10u = ", value);
	
	for(c = 1; c <= CHAR_BIT * sizeof(unsigned); c++) {
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;
		
		if ( c % 8 == 0 ) {
			putchar(' ');
		}
	}
		
}
