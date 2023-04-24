/* Exercício 7: Escreva um programa que leia a idade de uma pessoa
   e imprima se ela é maior ou menor de idade. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file" em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 17. Na linha 18, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 19, a declaração de três variáveis do tipo int: idade, maior e menor. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, maior, menor;
	
	/* Solicitação e atribuição de valor à variável idade por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da variável que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicitação, usa-se o caractere de nova linha (\n), ou seja, 
		a próxima saída para a tela acontece na linha seguinte. */
	
	printf("\nInforme a sua idade: ");
	scanf("%d", &idade);
	
	/* O comando if é utilizado para especificar um bloco de código a ser executado se uma condição for verdadeira. 
		Usamos a variável idade para testar se o valor atribuído a ela é maior ou igual a 0 e menor que 18. 
		Se a condição for verdadeira, imprimimos na tela "Menor de idade.". */
	
	if(idade >= 0 && idade < 18){
		printf("\nMenor de idade.\n\n");
	}
	
	/* Da mesma forma, usamos a variável idade para testar se o valor atribuído a ela é maior ou igual a 18. 
		Se a condição for verdadeira, imprimimos na tela "Maior de idade.". */
	
	if(idade >= 18){
		printf("\nMaior de idade.\n\n");
	}
	
	/* Por fim, usamos a variável idade para testar se o valor atribuído a ela é menor que 0. 
		Se a condição for verdadeira, imprimimos na tela "Idade inválida!". */
	
	if(idade < 0){
		printf("\nIdade inválida!\n\n");
	}
	
	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
}
