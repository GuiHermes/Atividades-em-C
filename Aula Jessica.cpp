#include <stdio.h>
#include <locale.h>
/**
int main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	for(i=1; i<=10; i++){
		printf("O %d� numero �:%d\n",i,i);
	}
	return 0;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, valor_lido, maior = -999999;
	
	for(i=0; i<10; i++){
		printf("Digite um n�mero:\n");
		scanf("%d",&valor_lido);
		if(valor_lido>maior){
			maior = valor_lido;
		}
	}	
	printf("O valor do maior n�mero �:%d\n",maior);
	return 0;
}

int main(){
	setlocale (LC_ALL, "portuguese");
	int i, num, cont = 0;
	printf("Digite um n�mero:\n");
	scanf("%d",&num);
	for(i=1; i<=num; i++){
		if(num % i ==0){
			printf("Divisor: %d\n",i);
			cont++;
		}
	}
	printf("\nNumero %d possui %d divisores.\n",num,cont);
	return 0;
}
**/
int main(){
	setlocale (LC_ALL, "portuguese");
	
