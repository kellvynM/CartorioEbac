#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h>// biblioteca respons�vel por cuidar das string

int registro() // Fun��o respons�vell por cadastrar os usu�rios no sistema

{
	//Inicio da cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de vari�veis/string
	
	printf(" Digite o CPF a ser cadastrado: ");// Coletando informa��es do usu�rio
	scanf("%s", cpf);//%s refere-se a string
	
    strcpy(arquivo, cpf);// Respons�vel por copiar os valores das string
    
    FILE *file;// cria o arquivo
    file = fopen(arquivo, "w");// cria o arquivo
    fprintf(file,"CPF - ");
    fprintf(file,cpf); //salvo o valor da variavel
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,"\nNOME - ");
    fclose(file);
    
    printf("\n Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,"\nSOBRENOME - ");
    fclose(file);
    
    printf("\n Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo,"a");
    fprintf(file,"\nCARGO - ");
    fclose(file);
    
    printf("\n Digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    
    
    
    
    system("pause");
    
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado:");
	scanf("%s",cpf);
	FILE *file;
	file = fopen(cpf,"r");
	
	
	if(file == NULL)
	
	{
	    printf("\n N�o foi possivel localizar o cpf consultado.\n\n");
	    
	}
	
		
	
	printf("Essas s�o as informa��es do usu�rio:\n\n");
	
	
    while(fgets(conteudo,200,file)!= NULL)	
    {
        printf("%s", conteudo);
        printf("\n\n");
        
        
    }

    system("pause");


}

int deletar()
{
    char cpf[40];
    
	printf("Digite o cpf do usu�rio a ser deletado: ");
    scanf("%s",cpf);
     
    remove(cpf);
    
     
    FILE *file;
    file = fopen(cpf,"r");
    
     
    if(file == NULL)
    {
     	printf("\nO usu�rio digitado n�o existe ou j� encontrasse foi deletado!.\n");
     	
		system("pause");
     	
	}
     
     
	 }



int main()

    {
	int opcao=0; // Definindo variaveis
	int laco=1;

	for(laco=1;laco=1;)
	{
	
	    system("cls");
	    
		setlocale(LC_ALL, "Portuguese"); // Definindo Linguagens
		
	    
		printf("### Cart�rio da EBAC ###\n\n"); // Inicio do menu
	    
		printf("Escolha a op��o desejada do menu:\n\n");
	    
		printf("\t1 - Registrar nomes\n");
	    
		printf("\t2 - Consultar nomes\n");
	    
		printf("\t3 - Deletar nomes\n\n");
		
		printf("\t4 - Sair do sistema\n\n");
	    
		printf("Op��o:");	// Final do menu
	
	    
		scanf("%d", &opcao); // Armazenando a escolha do usu�rio 
	
	    
		system("cls"); // respons�vel
		
		
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
		    
		    case 4:
		    printf("Obrigador por utilizar o sitema");
			return 0;
			break;	
			
			default:
			printf("Essa op��o n�o est� disponivel\n");
		    system("pause");
			break;	
		}
	
			
		
				
	}
    } 
	 
	    
	
     

			    


