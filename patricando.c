#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

		//anotação do que o cliente precisa no seu projeto sobre dados de usuario...
		//o projeto precisa ter: parte 1 incluir dados[OK]  parte 2 adicionar arquivo[]
		//cpf:
		//nome:
		//sobrenome:
		//numero de telefone:
		//idade:
		//altura:
		//onde mora:
		//escolaridade:
	
int registro()
{
	
			#define texto "\t\tinforme os dados a seguir\n\n"
	
	setlocale(LC_ALL,"PORTUGUESE"); //definindo a linguagem
	
	char arquivo[40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char numero_de_telefone [40];
	char altura [40];
	char idade [40];
	char onde_mora [40];
	char escolaridade [40];
			
	printf("\n\n %s",texto);
	
	printf("informe seu cpf:\n");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf); //responsavel por copair os valores sdas string
	
	FILE *file; // criar arquivo
	file = fopen (arquivo,"w"); //criar arquivo
	fprintf(file,cpf); // salvar o valor da variavel
	fclose(file); // fechar o arquivo
	
	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("informe seu nome:\n");
	scanf("%s",nome);

	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("informe seu sobrenome:\n");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file ,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("informe seu numero_de_telefone:\n");
	scanf("%s",numero_de_telefone);
	
	file = fopen(arquivo, "a");
	fprintf(file, numero_de_telefone);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("informe sua altura:\n");
	scanf("%s",altura);
	
	file = fopen(arquivo,"a");
	fprintf(file, altura);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("informe sua idade:\n");
	scanf("%s",idade);
	
	file = fopen(arquivo,"a");
	fprintf(file, idade);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("informe onde mora:\n");
	scanf("%s",onde_mora);
	
	file =fopen(arquivo, "a");
	fprintf(file, onde_mora);
	fclose(file);
	
	file =fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("informe sua escolaridade:\n");
	scanf("%s",escolaridade);
	
	file =fopen(arquivo, "a");
	fprintf(file, escolaridade);
	fclose(file);	
	
	system("pause");
	
	
}	

int consulta()
{
	setlocale(LC_ALL,"PORTUGUESE"); //definindo a linguagem
	
	char cpf [40];
	char conteudo [200];
	
	printf("informe o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("cpf a ser consultado não foi possivél encontra-lo \n ");
		
	}
	
	while(fgets(conteudo, 200, file) !=NULL )
	{
		printf("\n essas são as informações do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
    }
	
		system("pause");
			
}

int deletar()
{

	char cpf[40];
	
	printf("informe o cpf a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file =fopen(cpf,"r");
	
	if(file == NULL)
	{
	
	printf("o usuario não se encontra no sistema!\n\n ");
	system("pause");

	}	
	
}
	
int main()
	
{
		
	
	int opcao = 0;
	int i=1;
	
	for (i=1; i=1;)
	{
	
		system("cls");
		
		setlocale(LC_ALL,"PORTUGUESE"); //definindo a linguagem
		
		printf("escolha a opção desejada do menu:\n\n"); //inicio do menu
		printf("\t1 - registrar os nome:\n");
		printf("\t2 - consultar os nome:\n");
		printf("\t3 - deletar os nome:\n\n");
		printf("\t4 - sair do programa:\n\n");
		printf("opcao:");
		scanf("%d",&opcao); 
	
		system("cls");	
	
	    switch(opcao)
	    {
		
			case 1:
			registro();
			break;
		
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
		
			default:
			printf("essa opcao nao estar disponivel\n ");
			system("pause");
			break;
		}
    }
}
