#include <stdio.h>

void menu(){
	/* Menu */
	printf("\n\n================================================\n");
    printf("\t\t Menu: \n");
    printf("0 - Voto em Branco \n");
	printf("1 -  Opcao 1\n");
    printf("2 -  Opção 2\n");
    printf("3 -  Opcão 3\n");
    printf("4 -  Opção 4\n");
    printf("X - (Qualquer numero não indicado) - Nulo \n");
	printf("================================================\n");
}

int opcao1, opcao2, opcao3, opcao4, opcaobranco, opcaonulo;

void encontraVotos(int escolha){
    switch(escolha){
        case 0:
            opcaobranco = opcaobranco + 1;
            printf("Escolheu a opcao branco");
            break;
        case 1:
            opcao1 = opcao1 + 1;
            printf("Escolheu a opcao 1");
            break;
        case 2:
            opcao2 = opcao2 + 1;
            printf("Escolheu a opcao 2");
            break;
        case 3:
            opcao3 = opcao3 + 1;
            printf("Escolheu a opcao 3");
            break;
        case 4:
            opcao4++;
            printf("Escolheu a opcao 4");
            break;
        default:
            opcaonulo = opcaonulo + 1;
            printf("Escolheu votar nulo");    
    }
}


int main(){
    /* Eleicao */
    opcao1 = opcao2 = opcao3 = opcao4 = opcaobranco = opcaonulo = 0;
    int escolha;
    int cont;
    int quanteleitor;
    quanteleitor = 1;
    
    for(cont = 0; cont < 5; cont++){
        /* N Eleitor */

        menu();

        printf("\n\n %d° Eleitor : \n\n", quanteleitor++);
        printf("Digite a sua opcao: \n");

        scanf("%d", &escolha);
        encontraVotos(escolha);
    }

    if ((opcao1 > opcao2) && (opcao1 > opcao3) && (opcao1 > opcao4)){
        printf("\n\n=============== Vencedor : ==============\n\n");
        printf("Opcao 1 venceu ");
    }

    if ((opcao2 > opcao1) && (opcao2 > opcao3) && (opcao2 > opcao4)){
        printf("\n\n=============== Vencedor : ==============\n\n");
        printf("Opcao 2 venceu ");
    }

    if ((opcao3 > opcao1) && (opcao3 > opcao2) && (opcao3 > opcao4)){
        printf("\n\n=============== Vencedor : ==============\n\n");
        printf("Opcao 3 venceu ");
    }

    if ((opcao4 > opcao1) && (opcao4 > opcao2) && (opcao4 > opcao3)){
        printf("\n\n=============== Vencedor : ==============\n\n");
        printf("Opcao 4 venceu ");
    }

    printf("\n \t\t Relatorio");
    printf("\n %d votos para a opcao em branco", opcaobranco);
    printf("\n %d votos para a opcao1", opcao1);
    printf("\n %d votos para a opcao2", opcao2);
    printf("\n %d votos para a opcao3", opcao3);
    printf("\n %d votos para a opcao4", opcao4);
    printf("\n %d votos nulo", opcaonulo);


    return 0;
}

