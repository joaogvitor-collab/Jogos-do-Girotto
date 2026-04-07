#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    int jogos;
	int menu;
    int pokemon;
    int acertos = 0;
    do {
        printf("# MENU DE ESCOLHA #\n ");
        printf("1 - Opcao de Jogos\n");
        printf("0 - Sair\n");
        scanf("%i", &menu);
        system("cls");
        if (menu == 1) {
        	printf("GIROTTADA GAMES APRESENTA: JOGOS!\n\n");
        	printf("1: Perguntas e respostas\n2: Cobra na Caixa\n3: Gousmas War\n4: sair\n");
        	scanf("%d", &jogos);
        	system("cls");
        	switch(jogos){
        		case 1:
        			do {
                		printf("#####PERGUNTAS E RESPOSTAS#####\n\nResponda corretamente as 5 perguntas sobre pokemon!\n\n");
                		printf("Primeira pergunta: Quantos pokemon foram apresentados em kanto?\n\n1: 150\n2: 152\n3: 151\n4: 155\n");
                		scanf("%d", &pokemon);
                		if (pokemon == 3) {
                    		printf("Certa Resposta!\n\n");
                    		acertos += 1;
                    	}
                    	else {
							printf("Errou. A resposta correta era: 151\n\n");
						}
                    	printf("Segunda pergunta: Quantos km/h o pokemon Excadrill se locomove pela terra?\n\n1: 185\n2: 145\n3: 90\n4: 160\n");
                   		scanf("%d", &pokemon);
                    	if (pokemon == 2) {
                        	printf("Certa Resposta!\n\n");
                        	acertos += 1;
                        }
                        else{
                        	printf("Errou. A resposta era 145\n\n");
						}
                        printf("Terceira pergunta: Qual o pokemon conhecido por ter o DNA de todos os pokemon?\n\n1: Mew\n2: Arceus\n3: Ditto\n4: Mewtwo\n");
                        scanf("%d", &pokemon);
                        if (pokemon == 1) {
                        	printf("Certa Resposta!\n\n");
                        	acertos += 1;
                        }
                        else {
                        	printf("Errada a resposta. A resposta certa seria Mew \n\n");
						}
                        printf("Quarta pergunta: Quanto ataque especial que o mega lucario tem?\n\n1: 120\n2: 150\n3: 140\n4: 145\n");
                        scanf("%d", &pokemon);
                        if (pokemon == 3) {
                            printf("Certa Resposta!\n\n");
                            acertos += 1;
                        }
                        else{
                        	printf("Errou. A resposta e 140 \n\n");
						}
                        printf("Ultima pergunta: Qual o pokemon de numero 399 na pokedex nacional?\n1: Excadrill\n2: Goodra\n3: Lucario\n4: Bidoof\n");
                        scanf("%d", &pokemon);
                        if (pokemon == 4) {
                            printf("Certa Resposta!\n\n");
                            acertos += 1;
                        }
                        else {
                        	printf("Errou. A resposta certa e Bidoof");
						}
                        printf("Jogo FINALIZADO!!! Parabens!!! Voce acertou um total de %i perguntas\n\n", acertos);
                        printf("Escolha!\n1: Jogar de novo\n0: Voltar para o Menu\n");
                		scanf("%d", &jogos);
                		system("cls");       
                    } while (jogos == 1);
                break;
                case 2:
                	do{
                		printf("COBRA NA CAIXA \n");
                		int botao;
                		int cobra;
                		cobra = (rand() % 5) + 1;
                		do{
                			botao = (rand() % 5) + 1;
						} while(botao == cobra);
					
						int vencedor = 0;
						int vez = 1;
						int escolhida;
						while(vencedor == 0){
							printf("Vez do jogador %i \n", vez);
							printf("Escolha uma caixa de 1 a 5 \n");
							scanf("%i", &escolhida);
						
							if(escolhida > 5 || escolhida <= 0){
								printf("Valor invalido inserido! \n");
								continue;
							}
							if(escolhida == botao){
								printf("Tinha o botao na caixa %i! \n", escolhida);
								vencedor = vez;
							}
							else if(escolhida == cobra){
								printf("Tinha a cobra na caixa \n", escolhida);
								if(vez == 1){
									vencedor = 2;
								}
								else{
									vencedor = 1;
								}
							}
							else{
								printf("Nao tinha nada na caixa %i.... \n", escolhida);
							}
							if(vez == 1){
								vez = 2;
							}
							else{
								vez = 1;
							}
						}
						printf("O vencedor foi o jogador %i \n", vencedor);
						printf("Escolha!\n1: Jogar de novo\n0: Voltar para o Menu\n");
                		scanf("%d", &jogos);
                		system("cls");
                	}while(jogos == 1);
				break;
				case 3: 
					do{
						int gousmas [2][2] = {{1 , 1} , {1 , 1}};
						int opcao, escolha, mudanca, alvo, furia;
						int jogador = 0;
						while(true){
							int outroJogador = 1 - jogador;
							printf("\n 	TURNO DO JOGADOR %d 	\n", jogador + 1);
							printf("Suas Gousmas [Gousmas 1: %d] [Gousmas 2: %d] \n ", gousmas[jogador][0], gousmas[jogador][1]);
							printf("Gousmas Inimigas [Gousmas 1: %d] [Gousmas 2: %d] \n", gousmas[outroJogador][0], gousmas[outroJogador][1]);
							printf("1 - Ataque | 2 - Divisao:  ");
							scanf("%d", &opcao);
							if(opcao == 1){
								printf("Qual Gousmas sua ira atacar (A primeira ou a segunda)? ");
								scanf("%d", &escolha);
								escolha--;
								if(gousmas[jogador][escolha] > 0){
									printf("Qual das Gousmas inimigas ira atacar (Primeira ou Segunda)?");
									scanf("%d", &alvo);
									alvo--;
									if(gousmas[outroJogador][alvo] > 0){
										gousmas[outroJogador][alvo] += gousmas[jogador][escolha];
										printf("Voce atacou o inimigo! A furia dele agora e %d.\n", gousmas[outroJogador][alvo]);
										if(gousmas[outroJogador][alvo] > 5){
											printf("A Gousmas do inimigo foi desintegrada!\n");
											gousmas[outroJogador][alvo] = 0;
										}
									}
								}
							}	
							else if (opcao == 2){
								printf("Qual Gousmas deseja dividir (A Primeira ou a Segunda)?");
								scanf("%d", &escolha);
								escolha--;
								mudanca = 1 - escolha;
								if(gousmas[jogador][escolha] > 1 && gousmas[jogador][mudanca] >= 0){
									printf("Qual a quantidade de furia que sera transferida (De 1 a %d)?", gousmas[jogador][escolha] - 1);
									scanf("%d", &furia);
									gousmas[jogador][escolha] -= furia;
									gousmas[jogador][mudanca] += furia;
									printf("Furia foi dividida com sucesso!\n");
								}
								else{
									printf("Nao foi possivel dividir a furia (Furia Insuficiente ou Espaco Ocupado)\n");
									continue;
								}
							}
							if(gousmas[outroJogador][0] == 0 && gousmas[outroJogador][1] == 0){
								printf("\n O JOGADOR %d VENCEU!!!!\n", jogador + 1);
								break;
							}	
							jogador = outroJogador;
						}
						printf("Escolha!\n1: Jogar de novo\n0: Voltar para o Menu\n");
                		scanf("%d", &jogos);
                		system("cls");
					} while(jogos == 1);
				break;
			}
    	}
    	if(menu == 0){
    		printf("SAIR DO JOGO\n");
    		system("pause");
		}
		
    } while (menu != 0);
    
    
	return 0;
}