#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação em memória
#include <locale.h> //biblioteca de alocação de texto por região

int main ()
{
	int opcao=0; //definindo as variáveis
	int laco=1;
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	for(laco=1;laco=1;)
	{
		system("cls");
	
		printf("### Cartório da EBAC ###\n\n"); //início do menu
		printf("Escolha a opção desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes \n");
		printf("\t3 - Deletar nomes\n\n"); 
		printf("\t4 - Sair do sistema\n\n");
		printf("Opção:"); // fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usuário
	
		system("cls");
		
		switch(opcao)
		{
			case 1:
			printf("Você escolheu o registro de nomes!\n");
			system("pause");
			break;
			
			case 2:
			printf("Você escolheu consultar os nomes!\n");
			system("pause");
			break;
			
			case 3:
			printf("Você escolheu deletar nomes!\n");
			system("pause");
			break;
			
			case 4:
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("Essa opção não está disponível!\n");
			system("pause");
			break;  //fim da seleção
		}
	}
}
