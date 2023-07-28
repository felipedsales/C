#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main (void){
	int meusocket;
	int conecta;

	struct sockaddr_in alvo;

	meusocket = socket(AF_INET,SOCK_STREAM,0);//Estrutura para usar o socket
	alvo.sin_family = AF_INET;
	alvo.sin_port = htons(80); //Definindo a Porta
	alvo.sin_addr.s_addr = inet_addr("192.168.0.1");//Definindo o Endereço IP

	conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);//Estrutura do Connect

	if (conecta == 0){
		printf("Porta Aberta \n");
		close(meusocket);//Encerra a conexão
		close(conecta);//Encerra a conexão
	}else{
		printf("Porta Fechada \n");
	}
}
