#include <stdio.h> //Biblioteca de input/output

// Desafio Super Trunfo - Países - Tema 1 - Cadastro das cartas

int main() {

  // ----- Variáveis --------------------------------------------------------------------------------------------------------
  char estado_C1[25]; char estado_C2[25]; //Recebe o estado informado pelo usuário
  char codCarta_C1[3]; char codCarta_C2[3]; //Recebe o código da carta informado pelo usuário
  char cidade_C1[25]; char cidade_C2[25]; //Recebe a cidade informada pelo usuário
  int populacao_C1 = 0; int populacao_C2 = 0; //Recebe o total da população informado pelo usuário
  float area_C1 = 0; float area_C2 = 0; //Recebe a área total informada pelo usuário
  double pib_C1 = 0; double pib_C2 = 0; //Recebe o pib informado pelo usuário
  int numPontosTuristicos_C1 = 0; int numPontosTuristicos_C2 = 0; //Recebe o total de pontos turísticos informado pelo usuário
  float densPop_C1 = 0; float densPop_C2 = 0; //Armazena o resultado do cálculo de densidade populacional
  float pipPerc_C1 = 0; float pipPerc_C2 = 0; //Armazena o resultado do cálculo do PIb per capita

  // ----- Input --------------------------------------------------------------------------------------------------------
  //Cabeçario
  printf("--- SISTEMA DE CADASTRO DE CARTAS SUPER TRUNFO ---\n\n"); 

  //Carta 1
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

  // ----- Processamento --------------------------------------------------------------------------------------------------------
  // -> Densidade populacional
  densPop_C1 = (float) populacao_C1 / area_C1;
  densPop_C2 = (float) populacao_C2 / area_C2;

  // -> PIB per capita
  pipPerc_C1 = (float) pib_C1 / populacao_C1;
  pipPerc_C2 = (float) pib_C2 / populacao_C2;

  // ----- Output --------------------------------------------------------------------------------------------------------
  printf("--- *RESULTADO FINAL* ---\n\n");

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

return 0;

} 