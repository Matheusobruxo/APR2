#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int usuario, computador, placarComputador;
	int placarUsuario = 0
	int x;
	for(x = 1;x>10;x++){
		printf("Digite a sua opção: \n");
		printf("0- Pedra\n1 Papel\n2tesoura\n");
		scanf("%d", &usuario);
	
		//srand(time(NULL));	
		//computador = rand() % 3;
		computador = 0;
		printf("%d \n %d", computador, usuario);
	
		if (usuario == computador){
			printf("Usuario: %d\nMaquina: %d\n", placarUsuario, placarComputador);	
		}
	
	
}

