#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sorteiaNumero() {
	return 1 + ( rand() % 1000 );
}

void loopTentativa(int numeroSorteado) {
	int tentativa;
	
	while(tentativa != numeroSorteado) {
		scanf("%d",&tentativa);
		if(tentativa > numeroSorteado) {
			printf("muito alto\n");
		} else {
			printf("muito baixo\n");
		}
	}
	
	printf("Parabens voce acertou! o numero era %d", numeroSorteado);	
}

int main ( void ) {
	int numero, primeiratentativa;
	char escolha;
	
	srand(time(NULL));
	
	numero = sorteiaNumero();
	
	printf("Eu tenho um numero entre 1 e 1000.\n");
	printf("Voce consegue descobrir qual e?\n");
	printf("Digite sua primeira tentativa.");
	scanf("%d", &primeiratentativa);
	
	if ( primeiratentativa == numero ) {
		printf("\nExcelente! Voce descobriu o numero!\n");
		printf("Gostaria de jogar novamente (s ou n)?");
		scanf(" %c", &escolha);
		
		if ( escolha == 's' ) {
			numero = sorteiaNumero();
			loopTentativa(numero); 
		} else {
			printf("Ok, ate a proxima");
		}
		
	} else {
		loopTentativa(numero);	
	}
}
