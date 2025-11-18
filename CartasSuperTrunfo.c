#include <stdio.h> //Biblioteca de input/output

// Desafio Super Trunfo - Países - Tema 1 - Cadastro das cartas

int main() {

  // ----- Variáveis ----------------------------------------------------------------------------------------------------
  char estado_C1[25]; char estado_C2[25]; //Recebe o estado informado pelo usuário
  char codCarta_C1[3]; char codCarta_C2[3]; //Recebe o código da carta informado pelo usuário
  char cidade_C1[25]; char cidade_C2[25]; //Recebe a cidade informada pelo usuário
  int populacao_C1 = 0; int populacao_C2 = 0; //Recebe o total da população informado pelo usuário
  float area_C1 = 0; float area_C2 = 0; //Recebe a área total informada pelo usuário
  double pib_C1 = 0; double pib_C2 = 0; //Recebe o pib informado pelo usuário
  int numPontosTuristicos_C1 = 0; int numPontosTuristicos_C2 = 0; //Recebe o total de pontos turísticos informado pelo usuário
  float densPop_C1 = 0; float densPop_C2 = 0; //Armazena o resultado do cálculo de densidade populacional
  float pipPerc_C1 = 0; float pipPerc_C2 = 0; //Armazena o resultado do cálculo do PIb per capita
  float superPoder_C1 = 0; float superPoder_C2 = 0; //Armazena o 'super-poder' das cartas
  //Armazenam os resultados das comparações por atributo
  char result_Populacao[20]; char result_Area[20]; char result_PIB[20]; char result_pontosTur[20];
  char result_densPop[20]; char result_pibPerc[20]; char result_superPod[20];
  int opcao; //Guarda a opção selecionada pelo usuário no menu inicial
  int atributoComparado; //Guarda a opção selecionada pelo usuário  para comparação de atributos

  // ----- Input --------------------------------------------------------------------------------------------------------
  //Menu inicial
  printf("--- SUPER TRUNFO ---\n\n"); 
  printf("---> Digite o numero da opção desejada:\n");
  printf("(1)-Iniciar o jogo!\n"); 
  printf("(2)-Exibir as regras\n"); 
  printf("(3)-Sair\n");
  do {printf("Opção: "); scanf("%d",&opcao);} while (opcao != 1 && opcao != 2 && opcao != 3);
  switch(opcao) {
    //Inicio do jogo
    case 1:
      //Carta 1
      printf("\n");
      printf("--- INSIRA OS DADOS DA 1ª CARTA:\n"); 
      printf("Insira o estado: "); fgets(estado_C1,25,stdin); 
      printf("Insira o código da carta: "); scanf("%s",codCarta_C1); 
      printf("Insira a cidade: "); scanf("%s",cidade_C1);
      printf("Insira a população total: "); scanf("%d",&populacao_C1);
      printf("Insira a área total em m²: "); scanf("%f",&area_C1);
      printf("Insira o PIB: "); scanf("%lf",&pib_C1);
      printf("Insira o total de pontos turísticos: "); scanf("%d",&numPontosTuristicos_C1);
      //Carta 2
      printf("\n"); 
      printf("--- INSIRA OS DADOS DA 2ª CARTA:\n"); 
      printf("Insira o estado: "); fgets(estado_C2,25,stdin); 
      printf("Insira o código da carta: "); scanf("%s",codCarta_C2); 
      printf("Insira a cidade: "); scanf("%s",cidade_C2);
      printf("Insira a população total: "); scanf("%d",&populacao_C2);
      printf("Insira a área total em m²: "); scanf("%f",&area_C2);
      printf("Insira o PIB: "); scanf("%lf",&pib_C2);
      printf("Insira o total de pontos turísticos: "); scanf("%d",&numPontosTuristicos_C2);
      //Seleção de atributo
      printf("\n"); 
      printf("---> Selecione o atributo a ser comparado entre as cartas:\n");
      printf("(4)-População\n"); printf("(5)-Área\n"); printf("(6)-PIB\n"); printf("(7)-Pontos turísticos\n");
      printf("(8)-Densidade Demográfica\n");
      do {
        printf("Atributo: "); scanf("%d",&atributoComparado);
      } while (atributoComparado != 4 && atributoComparado != 5 && atributoComparado != 6 && atributoComparado != 7 && atributoComparado != 8);
    break;
    //Regras
    case 2:
      printf("!-Ainda em construção-!");
    break;
    //Sair
    case 3:
      return 0;
    break;
  }

  // ----- Processamento ------------------------------------------------------------------------------------------------

  // -> Densidade populacional
  densPop_C1 = (float) populacao_C1 / area_C1;
  densPop_C2 = (float) populacao_C2 / area_C2;

  // -> PIB per capita
  pipPerc_C1 = (float) pib_C1 / populacao_C1;
  pipPerc_C2 = (float) pib_C2 / populacao_C2;

  // -> Super poder
  superPoder_C1 = (float) (populacao_C1 + area_C1 + pib_C1 + numPontosTuristicos_C1 + pipPerc_C1) / densPop_C1;
  superPoder_C2 = (float) (populacao_C2 + area_C2 + pib_C2 + numPontosTuristicos_C2 + pipPerc_C2) / densPop_C2;

  // ----- Output --------------------------------------------------------------------------------------------------------
  printf("\n");
  printf("--- *RESULTADO FINAL* ---\n\n");

  switch (atributoComparado) {
    //População
    case 4:
      printf("Estados --- > %s",estado_C1); printf(" X %s",estado_C2); printf("\n");
      printf("População:\n"); printf("Carta 1: %d",populacao_C1); printf(" X Carta 2: %d",populacao_C2); printf("\n");
      printf("---> RESULTADO: ");
      if(populacao_C1 > populacao_C2) {printf("Carta 1 venceu!!!\n");} else {printf("Carta 2 venceu!!!\n");}
    break;
    //Area
    case 5:
      printf("Estados --- > %s",estado_C1); printf(" X %s",estado_C2); printf("\n");
      printf("Area:\n"); printf("Carta 1: %2f",area_C1); printf(" X Carta 2: %2f",area_C2); printf("\n");
      printf("---> RESULTADO: ");
      if(area_C1 > area_C2) {printf("Carta 1 venceu!!!\n");} else {printf("Carta 2 venceu!!!\n");}
    break;
    //PIB
    case 6:
      printf("Estados --- > %s",estado_C1); printf(" X %s",estado_C2); printf("\n");
      printf("PIB:\n"); printf("Carta 1: %lf",pib_C1); printf(" X Carta 2: %lf",pib_C2); printf("\n");
      printf("---> RESULTADO: ");
      if(pib_C1 > pib_C2) {printf("Carta 1 venceu!!!\n");} else {printf("Carta 2 venceu!!!\n");}
    break;
    //Pontos turisticos
    case 7:
      printf("Estados --- > %s",estado_C1); printf(" X %s",estado_C2); printf("\n");
      printf("Pontos turisticos:\n"); printf("Carta 1: %d",numPontosTuristicos_C1); printf(" X Carta 2: %d",numPontosTuristicos_C2); printf("\n");
      printf("---> RESULTADO: ");
      if(numPontosTuristicos_C1 > numPontosTuristicos_C2) {printf("Carta 1 venceu!!!\n");} else {printf("Carta 2 venceu!!!\n");}
    break;
    //Densidade Populacional
    case 8:
      printf("Estados --- > %s",estado_C1); printf(" X %s",estado_C2); printf("\n");
      printf("Densidade populacional:\n"); printf("Carta 1: %2f",densPop_C1); printf(" X Carta 2: %2f",densPop_C2); printf("\n");
      printf("---> RESULTADO: ");
      if(densPop_C1 > densPop_C2) {printf("Carta 2 venceu!!!\n");} else {printf("Carta 1 venceu!!!\n");}
    break;

    /*
    //PIB per capita
    printf("PIB per capita: ");
    if(pipPerc_C1 > pipPerc_C2) {printf("Carta 1 venceu!!!\n");} else {printf("Carta 2 venceu!!!\n");}

    //Super poder
    printf("Super poder: ");
    if(superPoder_C1 > superPoder_C2) {printf("Carta 1 venceu!!!\n");} else {printf("Carta 2 venceu!!!\n");}

    */
  }

  /*
  //Carta1
  printf("- Carta 1:\n");
  printf("Estado: %s\n",estado_C1);
  printf("Código: %s\n",codCarta_C1);
  printf("Cidade: %s\n",cidade_C1);
  printf("População: %d\n",populacao_C1);
  printf("Área(m²): %2f\n",area_C1);
  printf("PIB: %lf\n",pib_C1);
  printf("Pontos turísticos: %d\n",numPontosTuristicos_C1);
  printf("Densidade populacional: %2f\n",densPop_C1);
  printf("PIB per capita: %2f\n",pipPerc_C1);
  printf("\n"); 
  
  //Carta2
  printf("- Carta 2:\n");
  printf("Estado: %s\n",estado_C2);
  printf("Código: %s\n",codCarta_C2);
  printf("Cidade: %s\n",cidade_C2);
  printf("População: %d\n",populacao_C2);
  printf("Área(m²): %2f\n",area_C2);
  printf("PIB: %lf\n",pib_C2);
  printf("Pontos turísticos: %d\n",numPontosTuristicos_C2);
  printf("Densidade populacional: %2f\n",densPop_C2);
  printf("PIB per capita: %2f\n",pipPerc_C2);
  */

return 0;

} 