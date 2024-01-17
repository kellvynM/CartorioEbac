#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h>// biblioteca responsável por cuidar das string

int registro() // Função responsávell por cadastrar os usuários no sistema

{
	//Inicio da criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf(" Digite o CPF a ser cadastrado: ");// Coletando informações do usuário
	scanf("%s", cpf);//%s refere-se a string
	
    strcpy(arquivo, cpf);// Responsável por copiar os valores das string
    
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
	    printf("\n Não foi possivel localizar o cpf consultado.\n\n");
	    
	}
	
		
	
	printf("Essas são as informações do usuário:\n\n");
	
	
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
    
	printf("Digite o cpf do usuário a ser deletado: ");
    scanf("%s",cpf);
     
    remove(cpf);
    
     
    FILE *file;
    file = fopen(cpf,"r");
    
     
    if(file == NULL)
    {
     	printf("\nO usuário digitado não existe ou já encontrasse foi deletado!.\n");
     	
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
		
	    
		printf("### Cartório da EBAC ###\n\n"); // Inicio do menu
	    
		printf("Escolha a opção desejada do menu:\n\n");
	    
		printf("\t1 - Registrar nomes\n");
	    
		printf("\t2 - Consultar nomes\n");
	    
		printf("\t3 - Deletar nomes\n\n");
	    
		printf("Opção:");	// Final do menu
	
	    
		scanf("%d", &opcao); // Armazenando a escolha do usuário 
	
	    
		system("cls"); // responsável
		
		
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
			printf("Essa opção não está disponivel\n");
		    system("pause");
			break;	
		}
	
			
		
				
	}
    } 
	 
	    
	
     

			    


