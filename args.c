#include <stdio.h>

int main(int argc, char *argv[]){ //Definindo os argumentos
	
	int i;
	char *ip;
	ip = argv[1];
	
	if(argc<2){
	printf("Modo de Uso: ./program 192.168.0 \n");

	}else{
	for(i=0;i<=10;i++){
	printf("Varrendo o Host %s.%i \n",ip,i);
	}
	}
}
