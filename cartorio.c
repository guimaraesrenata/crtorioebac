#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o

int main ()
{
	int opcao=0; //definindo as vari�veis
	int laco=1;
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	for(laco=1;laco=1;)
	{
		system("cls");
	
		printf("### Cart�rio da EBAC ###\n\n"); //in�cio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes\n\n"); 
		printf("\t4 - Sair do sistema\n\n");
		printf("Op��o:"); // fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
		system("cls");
		
		switch(opcao)
		{
			case 1:
			printf("Voc� escolheu o registro de nomes!\n");
			system("pause");
			break;
			
			case 2:
			printf("Voc� escolheu consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Voc� escolheu deletar nomes!\n");
			system("pause");
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("Essa op��o n�o est� dispon�vel!\n");
			system("pause");
			break;  //fim da sele��o
		}
	}
}
