#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h>//bibliteca respons�vel por cuidar das string
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o cpf a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);//responsavel por copiar os valores das string

    FILE *file; // cria o arquivo
    file = fopen(arquivo, "w");
    fprintf(file,cpf);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o nome a ser caastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
    
}


int consulta()
{
	setlocale(LC_ALL, "Portuguese"); 
	
    char  cpf[40];
    char conteudo[200];
    
    printf("digite o cpf a ser consultado: ");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		 printf("n�o foi possivel abrir o arquivo, N�O LOCALIZADO!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa�oes do usu�rio:");
	    printf("%s", conteudo);
	    printf("\n\n");
		
	}
	
	 system("pause");
	
	
	
	
}
	    
int deletar()
{
  char cpf [40];
  
  printf("Digite o cpf a ser deletado");
  scanf("%s",cpf);

  remove(cpf);
  
  FILE *file;
  file = fopen(cpf,"r");
  
  if(file== NULL)
  {
  	  printf(" o usu�rio n�o se encontra no sestema!.\n");
  	  system("pause");
  	  
  }

}

int main()  
    {
	int opcao=0;     //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	   
	    system("cls");
	   
	    setlocale(LC_ALL, "Portuguese");   //definindo a liguagem
	
	    printf("### cart�rio da EBAC ###\n\n");   //inicio do menu 
	    printf("Escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - Registrar nomes\n");
	    printf("\t2 - consultar nomes\n");
	    printf("\t3 - Deletar nomes\n\n");  
	    printf("op��o:  ");   //fin do menu
	
	    scanf("%d", &opcao); //amarzenamento a escolha do usu�rio
	
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
		   printf("essa op�ao n�o esta disponivel!\n");
		   system("pause");
		   break;
		}
	
	    
    }
}

