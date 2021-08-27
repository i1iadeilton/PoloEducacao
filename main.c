#include <stdio.h>
#include <string.h>

typedef struct {
      int codigo,alunos,tutores,lc,li;
      char cidade[20];
      float verba;
      

}Verba_Polo;

int main(void) {

   Verba_Polo verba[20];
   int qt=0,resp=0,i=0;

do{
   printf("Informe o codigo do polo: ");
   scanf("%d", &verba[qt].codigo);
   
   setbuf(stdin, 0);
   printf("\nInforme a cidade: ");
   fgets(verba[qt].cidade, 20, stdin);
   verba[qt].cidade[strcspn(verba[qt].cidade, "\n")]= '\0';
   
   printf("\nInforme a quantidade de alunos: ");
   scanf("%d", &verba[qt].alunos);

   printf("\nInforme a quantidade de tutores: ");
   scanf("%d", &verba[qt].tutores);
   
   printf("\nO polo possui laboratorio de informatica (LI)?: ");
   printf("(1-Sim/ 0-Não): ");
   scanf("%d", &verba[qt].li);

   printf("\nO polo possui laboratorio de ciências (LC)?: ");
   printf("(1-Sim/ 0-Não): ");
   scanf("%d", &verba[qt].lc);

   
  verba[qt].verba = (100 * verba[qt].alunos) + (500 * verba[qt].tutores) ;

if(verba[qt].li == 0){

  verba[qt].verba += 20000.00;
  
  }

if(verba[qt].lc == 0){

  verba[qt].verba += 17000.00;
  
  }
  
  printf("\nDeseja cadastrar outro polo? ");
  printf("(1-Sim/ 0-Não)");
  scanf("%d", &resp);
  qt++;
}while(resp == 1);
 
  printf("\e[H\e[2J");

  printf("\n\nPoloConectado");
  printf("\n\nListagem Geral");
  printf("\n|-----------------------------------------------------------------------------|");

  printf("\n| Codigo | Cidade               | Alunos | Tutores | LI | LC | Verba Liberada |");

  printf("\n|-----------------------------------------------------------------------------|");

  for(i=0; i<qt; i++){

   printf("\n\n| %-6d | %-20s | %-6d | %-7d | %-2d | %-2d | %-14.2f |",verba[i].codigo,verba[i].cidade,verba[i].alunos,verba[i].tutores,verba[i].li,verba[i].lc,verba[i].verba);
 
 }
   printf("\n|-----------------------------------------------------------------------------|");
}
