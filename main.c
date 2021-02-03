#include <stdio.h>
#include <stdlib.h>

int main(){
    /* Eleicao */

    int escolha;
    int opcao1, opcao2, opcao3, opcao4;
    opcao1  = opcao2 = opcao3 = opcao4 = 0;

    int branco, nulo;

    branco = nulo = 0;

    escolha = 0;

	/* Definir as opções do Menu */
	char opcaoescrita01[40] = "Linguagem C";
	char opcaoescrita02[40] = "Linguagem Java";
	char opcaoescrita03[40] = "Linguagem Python";
	char opcaoescrita04[40] = "Linguagem JavaScript";

	/* Menu */
	printf("================================================\n");
    printf("\t\tRanking Linguagem de Programação : \n");
    printf("0 - Voto em Branco \n");
	printf("1 - %s \n", opcaoescrita01);
    printf("2 - %s \n", opcaoescrita02);
    printf("3 - %s \n", opcaoescrita03);
    printf("4 - %s \n", opcaoescrita04);
    printf("X - (Qualquer numero não indicado) - Nulo \n");
	printf("================================================\n");

    /* Primeiro Eleitor */
    printf("Primeiro Eleitor: \n\n");
    printf("Digite a sua opcao: \n");

    scanf("%d", &escolha);

    if(escolha == 0){
        /* comando 0*/
        branco = branco + 1;
        printf("Optou pelo Voto em Branco \n");
    }else if(escolha == 1){
        /* comando 1*/
        opcao1 = opcao1 + 1;
        printf("Escolheu a %s \n", opcaoescrita01);
    }else if(escolha == 2){
        /* comando 2*/
        opcao2 = opcao2 + 1;
        printf("Escolheu a %s \n", opcaoescrita02);
    }else if(escolha == 3){
        /* comando 3*/
        opcao3 = opcao3 + 1;
        printf("Escolheu a %s \n", opcaoescrita03);
    }else if(escolha == 4){
        /* comando 4*/
        opcao4 = opcao4 + 1;
        printf("Escolheu a %s \n", opcaoescrita04);
    }else{
        /* Default */
        nulo = nulo + 1;
        printf("Escolheu Nulo \n");
    }

	/* Begin */
	/* Obra da futura programadora Kenia */
    /* Segundo Eleitor */

    printf("\nSegundo Eleitor \n");
    printf("Digite a sua opção: \n");

    scanf("%d", &escolha);

    if(escolha == 0){
        /* comando 0*/
        branco = branco + 1;
        printf("Optou pelo Voto em Branco \n");
    }else if(escolha == 1){
        /* comando 1*/
        opcao1 = opcao1 + 1;
        printf("Escolheu a %s \n", opcaoescrita01);
    }else if(escolha == 2){
        /* comando 2*/
        opcao2 = opcao2 + 1;
        printf("Escolheu a %s \n", opcaoescrita02);
    }else if(escolha == 3){
        /* comando 3*/
        opcao3 = opcao3 + 1;
        printf("Escolheu a %s \n", opcaoescrita03);
    }else if(escolha == 4){
        /* comando 4*/
        opcao4 = opcao4 + 1;
        printf("Escolheu a %s \n", opcaoescrita04);
    }else{
        /* Default */
        nulo = nulo + 1;
        printf("Escolheu Nulo \n");
    }

    /* Terceiro Eleitor */

    printf("\nTerceiro Eleitor \n");
    printf("Digite a sua opção: \n");

    scanf("%d", &escolha);

    if(escolha == 0){
        /* comando 0*/
        branco = branco + 1;
        printf("Optou pelo Voto em Branco \n");
    }else if(escolha == 1){
        /* comando 1*/
        opcao1 = opcao1 + 1;
        printf("Escolheu a %s \n", opcaoescrita01);
    }else if(escolha == 2){
        /* comando 2*/
        opcao2 = opcao2 + 1;
        printf("Escolheu a %s \n", opcaoescrita02);
    }else if(escolha == 3){
        /* comando 3*/
        opcao3 = opcao3 + 1;
        printf("Escolheu a %s \n", opcaoescrita03);
    }else if(escolha == 4){
        /* comando 4*/
        opcao4 = opcao4 + 1;
        printf("Escolheu a %s \n", opcaoescrita04);
    }else{
        /* Default */
        nulo = nulo + 1;
        printf("Escolheu Nulo \n");
    }

	 /* Quarto Eleitor */

    printf("\nQuarto Eleitor \n");
    printf("Digite a sua opção: \n");

    scanf("%d", &escolha);

    if(escolha == 0){
        /* comando 0*/
        branco = branco + 1;
        printf("Optou pelo Voto em Branco \n");
    }else if(escolha == 1){
        /* comando 1*/
        opcao1 = opcao1 + 1;
        printf("Escolheu a %s \n", opcaoescrita01);
    }else if(escolha == 2){
        /* comando 2*/
        opcao2 = opcao2 + 1;
        printf("Escolheu a %s \n", opcaoescrita02);
    }else if(escolha == 3){
        /* comando 3*/
        opcao3 = opcao3 + 1;
        printf("Escolheu a %s \n", opcaoescrita03);
    }else if(escolha == 4){
        /* comando 4*/
        opcao4 = opcao4 + 1;
        printf("Escolheu a %s \n", opcaoescrita04);
    }else{
        /* Default */
        nulo = nulo + 1;
        printf("Escolheu Nulo \n");
    }

	 /* Quinto eleito Eleitor */


    printf("\nQuinto Eleitor \n");
    printf("Digite a sua opção: \n");

    scanf("%d", &escolha);

    if(escolha == 0){
        /* comando 0*/
        branco = branco + 1;
        printf("Optou pelo Voto em Branco \n");
    }else if(escolha == 1){
        /* comando 1*/
        opcao1 = opcao1 + 1;
        printf("Escolheu a %s \n", opcaoescrita01);
    }else if(escolha == 2){
        /* comando 2*/
        opcao2 = opcao2 + 1;
        printf("Escolheu a %s \n", opcaoescrita02);
    }else if(escolha == 3){
        /* comando 3*/
        opcao3 = opcao3 + 1;
        printf("Escolheu a %s \n", opcaoescrita03);
    }else if(escolha == 4){
        /* comando 4*/
        opcao4 = opcao4 + 1;
        printf("Escolheu a %s \n", opcaoescrita04);
    }else{
        /* Default */
        nulo = nulo + 1;
        printf("Escolheu Nulo \n");
    }

    /* Tarefa 1 Concluida */
	/* End */

    /* Para uma opcao ser a mais votada */


    if((opcao1 > opcao2) && (opcao1 > opcao3) && (opcao1 > opcao4) ){ /* Caso a opcao 1 seja escolhida*/
		printf("\n\n=========================================\n");
        printf("A %s  foi a mais bem colocada no Ranking", opcaoescrita01);
    }else if ((opcao2 > opcao1) && (opcao2 > opcao3) && (opcao2 > opcao4)){/* Caso a opcao 2 seja escolhida*/
		printf("\n\n=========================================\n");
        printf("A %s  foi a mais bem colocada no Ranking", opcaoescrita02);
    }else if ((opcao3 > opcao1) && (opcao3 > opcao2) && (opcao3 > opcao4)){/* Caso a opcao 3 seja escolhida*/
		printf("\n\n=========================================\n");
        printf("A %s  foi a mais bem colocada no Ranking", opcaoescrita03);
    }else if ((opcao4 > opcao1) && (opcao4 > opcao2) && (opcao4 > opcao3)){/* Caso a opcao 4 seja escolhida*/
		printf("\n\n=========================================\n");
        printf("A %s  foi a mais bem colocada no Ranking", opcaoescrita04);
    }else {
    /* Empates */
		if((opcao1 == 0) && (opcao2 == 0) && (opcao3 == 0) && (opcao4 == 0)){
			printf("Nenhuma opção possui votos suficientes para se eleger.\n");
			printf("=========================================\n");
		}else{ /* Caso alguma opção ou todas as opções empatem */
			/* Empates para a opção 1 */
			/* Opção 1 empata com Opção 2 e com Opção 3 e com Opção 4*/
			if(opcao1 > 0){
				if((opcao1 == opcao2) && (opcao1 == opcao3) && (opcao1 == opcao4)){ /* Todos Empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s e %s e %s Empataram!", opcaoescrita01, opcaoescrita02, opcaoescrita03, opcaoescrita04);
				}else if((opcao1 == opcao2) && (opcao1 == opcao3)){ /* Opções 1 e 2 e 3 empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s e %s Empataram!", opcaoescrita01, opcaoescrita02, opcaoescrita03);
				}else if((opcao1 == opcao2) && (opcao1 == opcao4)){ /* Opções 1 e 2 e 4 empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s e %s Empataram!", opcaoescrita01, opcaoescrita02, opcaoescrita04);
				}else if((opcao1 == opcao3) && (opcao1 == opcao4)){ /* Opções 1 e 3 e 4 empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s e %s Empataram!", opcaoescrita01, opcaoescrita03, opcaoescrita04);
				}else if(opcao1 == opcao2 ){ /* Opcao 1 e 2 empatam */
					printf("\n=========================================\n");
					printf("As opcoes %s e %s Empataram!", opcaoescrita01, opcaoescrita02);
				}else if(opcao1 == opcao3 ){ /* Opcao 1 e 3 empatam */
					printf("\n=========================================\n");
					printf("As opcoes %s e %s Empataram!", opcaoescrita01, opcaoescrita03);
				}else if(opcao1 == opcao4 ){ /* Opcao 1 e 4 empatam */
					printf("\n=========================================\n");
					printf("As opcoes %s e %s Empataram!", opcaoescrita01, opcaoescrita04);
				}
			}
			if((opcao2 > 0) && (opcao1 == 0)){
				if((opcao2 == opcao3) && (opcao2 == opcao4)){ /* Opção 2 com 3 e 4 empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s e %s Empataram!", opcaoescrita02, opcaoescrita03, opcaoescrita04);
				}else if(opcao2 == opcao3){ /* Opções 2 e 3 empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s Empataram!", opcaoescrita02, opcaoescrita03);
				}else if(opcao2 == opcao4){ /* Opções 2 e 4 empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s Empataram!", opcaoescrita02, opcaoescrita04);
				}
			}

			if((opcao3 > 0) && (opcao1 == 0) && (opcao2 == 0)){
				if(opcao3 == opcao4){ /* Opções 3 e 4 empataram */
					printf("\n=========================================\n");
					printf("As opcoes : %s e %s Empataram!", opcaoescrita03, opcaoescrita04);
				}
			}
		}
	}


	/* Relatorio : */

	printf("\n\n================================================\n");
	printf("\t\t\t Relatorio de Votos \n");
    printf("\nA %s recebeu %d votos", opcaoescrita01, opcao1);
	printf("\nA %s recebeu %d votos", opcaoescrita02, opcao2);
	printf("\nA %s recebeu %d votos", opcaoescrita03, opcao3);
	printf("\nA %s recebeu %d votos", opcaoescrita04, opcao4);

	printf("\n\n================================================");

	printf("\nQuantidades de votos nulos : %d ", nulo);
	printf("\nQuantidades de votos em branco : %d ", branco);
	printf("\n================================================");


    return 0;
}

