#include <stdio.h>

int main(void){

	int porta = 80;
	char ip[] = "192.168.0.1"; // [] - Significa o Número de Caracteres
	float ver = 1.1;
	
	printf("Variáveis \n");
	printf("Scan Versão: %.1f \n",ver);
	printf("Varrendo Host: %s na Porta %i \n",ip,porta);
	

	return 0;
}
