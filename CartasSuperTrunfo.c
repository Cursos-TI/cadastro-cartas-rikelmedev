#include <stdio.h>

int main() {
// --- VARIAVEIS DA CARTA 1 ---
  char estado1;
   char codigo1[4];
   char cidade1[20];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;
   float densidadepopulacional1;
   float pibbercapital1;

// --- VARIAVEIS DA CARTA 2 ---  
char estado2;
   char codigo2[4];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;
   float densidadepopulacional2;
   float pibbercapital2;

  
  //--- CADASTRO DA CARTA 1 ---
  printf("--- CADASTRO DA CARTA 1 ---\n");

  printf("DIGITE A LETRA DO ESTADO");
  scanf(" %c", estado1);

  printf("DIGITE O CODIGO DA CARTA");
  scanf("%s", codigo1);

  printf("DIGITE O NOME DA CIDADE");
  scanf(" %[^\n]", cidade1);

  printf("DIGITE O NUMERO DE HABITANTES");
  scanf("%d", &populacao1);

  printf("DIGITE A ÁREA EM QUILÔMETROS QUADRADOS");
  scanf("%f", &area1);

  printf("DIGITE O PRODUTO INTERNO DA CIDADE");
  scanf("%f", &pib1);
    
  printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS");
  scanf("%d", &pontosTuristicos1);  

  
  //--- CADASTRO DA CARTA 2 ---
  printf("--- CADASTRO DA CARTA 2 ---\n");

  printf("DIGITE A LETRA DO ESTADO");
  scanf(" %c", estado2);

  printf("DIGITE O CODIGO DA CARTA");
  scanf("%s", codigo2);

  printf("DIGITE O NOME DA CIDADE");
  scanf(" %[^\n]", cidade2);

  printf("DIGITE O NUMERO DE HABITANTES");
  scanf("%d", &populacao2);

  printf("DIGITE A ÁREA EM QUILÔMETROS QUADRADOS");
  scanf("%f", &area2);

  printf("DIGITE O PRODUTO INTERNO DA CIDADE");
  scanf("%f", &pib2);
    
  printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS");
  scanf("%d", &pontosTuristicos2); 

  
 //--- EXIBIÇÃO DOS DADOS ----
printf("\n------------------------------\n");
printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("Numero de Habitantes: %d\n", populacao1);
printf("Quilômetros quadrados: %.2f\n", area1);
printf("Quantidade de PIB em reais: %.2f\n", pib1);
printf("Numero de pontos turisticos: %d\n",pontosTuristicos1 ); 

  
printf("\n------------------------------\n");
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("Numero de Habitantes: %d\n", populacao2);
printf("Quilômetros quadrados: %.2f\n", area2);
printf("Quantidade de PIB em reais: %.2f\n", pib2);
printf("Numero de pontos turisticos: %d\n",pontosTuristicos2 ); 

  return 0;
} 
