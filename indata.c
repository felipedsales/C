#include <stdio.h>

int main(void){
	int porta;
	char ip[16];

	printf("Entrada de Dados\n");

	printf("Digite o IP: \n");
	scanf("%s",&ip);

	printf("Digite a Porta: \n");
	scanf("%i",&porta);

	printf("Varrendo o Host %s na Porta %i \n",ip,porta);
}
