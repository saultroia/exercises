/* Exercício 9: Crie um programa que leia um número inteiro 
   e imprima a tabuada desse número. */
   
/* Diretivas iniciadas com uma cerquilha (#), seguidas pela palavra reservada include para informar ao compilador que especificações 
	externas serão utilizadas. No caso particular, tais especificações se encontram nas bibliotecas stdio, stdlib e locale, seguidas de um 
	arquivo  de extensão .h para indicar que se trata de um "header file") em um diretório conhecido pelo compilador. 
	O nome de tal arquivo é delimitado pelos símbolos menor (<) e maior (>). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função principal iniciada em main(), na linha 17. Na linha 18, a função setlocale refere-se à localidade (país/região e idioma) 
	para a qual se pode personalizar alguns aspectos do programa, de forma que é usada para definir algumas ou todas as informações 
	de localidade do mesmo. O idioma usado é o Português padrão. Na linha 19, a declaração de duas variáveis do tipo int: tabuada (com valor inicial igual a 0) e i. */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tabuada = 0, i;
	
	/* Solicitação e atribuição de valor à variável tabuada por meio das funções printf (que traduz a representação interna de variáveis 
		para a representação ASCII para que possa ser apresentada na tela) e scanf (que opera sobre um fluxo de caracteres oriundo do teclado, 
		convertidos e atribuidos aos demais argumentos) com o caractere "E comercial" (&) antes do nome da variável que deve receber o valor 
		convertido a partir dos caracteres do fluxo de entrada. Antes da solicitação, usa-se o caractere de nova linha (\n), ou seja, 
		a próxima saída para a tela acontece na linha seguinte. */
		
	printf("\nDigite um número para imprimir a tabuada: ");
	scanf("%d", &tabuada);
	
	/* No comando de repetição for a instrução de inicialização é executada apenas uma vez. Em seguida, a expressão de teste é avaliada. 
		Se a expressão de teste for avaliada como falsa, o loop for será finalizado. No entanto, se a expressão de teste for avaliada como verdadeira, 
		as instruções dentro do corpo do loop for serão executadas e a expressão de atualização será atualizada. 
		Novamente a expressão de teste é avaliada. O processo continua até que a expressão de teste seja falsa. 
		Quando a expressão de teste é falsa, o loop termina. 
		
		Neste caso, temos a variável i, a qual recebe o valor 1. 
		Deste modo, enquanto i for menor ou igual a 10 (base-dez), o seu valor será incrementado na próxima linha até que a expressão seja avaliada como falsa. 
		O resultado é apresentado por meio da função printf, que imprime na tela a tabela matemática de multiplicação para um sistema algébrico. */
	
	for(i = 1; i <= 10; ++i){
		printf("%dx%d = %d\n", i, tabuada, i * tabuada);
	}
	
	/* O comando system("pause") é necessário no ambiente Windows para pausar a tela. 
		O comando return causa o término da execução do programa. 
		Se o valor retornado for zero, então isto indica que a execução terminou em condições normais. */
	
	system("pause");
  	return 0;
  	
  	/* Chave fechando o corpo da função principal, significa fim do programa. */
}
