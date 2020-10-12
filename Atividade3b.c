#include <stdio.h>

main()
{
	int c;
	float s,p;
	printf("Qual o salario atual: ");
	scanf("%f", &s);
	printf("Codigo: ");
	scanf("%d", &c);
	if (c == 1) {
		p = s*50/100;
		printf(" Cargo: Escriturario \n O seu salario tera um almento de %G reais",p);
	}else{
		if (c == 2){
			p = s*35/100;
			printf(" Cargo: Secretário \n O seu salario tera um almento de %G reais",p);
		}else{
			if (c == 3){
				p = s*20/100;
				printf(" Cargo: Caixa \n O seu salario tera um almento de %G reais",p);
			}else{
				if  (c == 4){
					p = s*10/100;
					printf(" Cargo: Gerente \n O seu salario tera um almento de %G reais",p);
				}else{
					if (c == 5){
						printf(" Cargo: Diretor \n Não tera almento");
					}else{
						printf("Opcao invalida");
					}
				}
			}
		}
	}
	system ("PAUSE");
}
