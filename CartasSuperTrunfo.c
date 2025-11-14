#include <stdio.h> //Biblioteca de input/output

// Desafio Super Trunfo - Países - Tema 1 - Cadastro das cartas

int main() {

  //Variáveis
  char estado[25]; //Recebe o estado informado pelo usuário
  char codCarta[3]; //Recebe o código da carta informado pelo usuário
  char cidade[25]; //Recebe a cidade informada pelo usuário
  int populacao = 0; //Recebe o total da população informado pelo usuário
  float area = 0; //Recebe a área total informada pelo usuário
  double pib = 0; //Recebe o pib informado pelo usuário
  int numPontosTuristicos = 0; //Recebe o total de pontos turísticos informado pelo usuário

  // ----- Input

  //Cabeçario
  printf("--- SISTEMA DE CADASTRO DE CARTAS SUPER TRUNFO ---\n"); 

  //Entrada de dados pelo prompt do usuário
  printf("Insira o estado: "); fgets(estado,25,stdin); 
  printf("Insira o código da carta: "); scanf("%s",codCarta); 
  printf("Insira a cidade: "); scanf("%s",cidade);
  printf("Insira a população total: "); scanf("%d",&populacao);
  printf("Insira a área total em m²: "); scanf("%f",&area);
  printf("Insira o PIB: "); scanf("%lf",&pib);
  printf("Insira o total de pontos turísticos: "); scanf("%d",&numPontosTuristicos);

  // ----- Output
  printf("- Carta 1:\n");
  printf("Estado: %s\n",estado);
  printf("Código: %s\n",codCarta);
  printf("Cidade: %s\n",cidade);
  printf("População: %d\n",populacao);
  printf("Área(m²): %2f\n",area);
  printf("PIB: %lf\n",pib);
  printf("Pontos turísticos: %d\n",numPontosTuristicos);

return 0;

} 