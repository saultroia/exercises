/* Exercício 10: Escreva um programa que leia o nome e a idade
   	de uma pessoa e imprima uma mensagem de saudação. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file" em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 18. Na linha 19, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 20, a declaração de uma variável do tipo char: nome (com capacidade de armazenamento de 50 caracteres). 
	Na linha 21, a declaração de uma variável do tipo int: idade. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	int idade;
	
	/* Solicitação e atribuição de valores às variáveis nome e idade por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela), scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos), com o caractere "E comercial" (&) antes do nome da variável que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada e a função gets (que lê uma linha de stdin, a armazena na string apontada 
		e para quando o caractere de nova linha é lido ou quando o fim do arquivo é atingido, o que ocorrer primeiro). */
	
	printf("\nDigite seu nome: ");
	gets(nome);
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
		/* Saudação impressa na tela ao término do fluxo de entrada. */
	
	printf("\nOlá %s! Parabéns pelos seus %d anos!\nObrigado pela colaboração!\n\n", nome, idade);
	
	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
}

