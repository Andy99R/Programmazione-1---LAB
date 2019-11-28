
#include <stdio.h>
int i;
struct persona { //Dichiaro la struct persona
	char nome[10];
	struct persona* mamma;
	struct persona * babbo;
};
typedef struct persona Persona; //Definisco una variabile di tipo persona

void fun_nome(Persona p){ //Dichiaro la funzione per la stampa del nome
	for(i=0;i<10;i++) 
	  printf("%c",p.nome[i]); //Stampo i caratteri del nome del figlio
	 printf("\n");
	if(p.mamma!=NULL){ //Controllo che la mamma abbia nome (Genitore 1 lol)
	 for(i=0;i<10;i++)
	  printf("%c",p.mamma->nome[i]); //Se ha un nome stampo i caratteri
    }
	else
	  printf("Sconosciuto"); // Altrimenti sconosciuto
	if(p.babbo!=NULL){ //Idem per il padre (Genitore 2)
	 for(i=0;i<10;i++)
      printf("%c",p.babbo->nome[i]);
    }
    else 
      printf("Sconosciuto");
      printf("\n");
}

int main(){
	struct persona figlio,mamma,babbo; //Dichiaro le tre persone 
	for(i=0;i<10;i++) //Prendo in input i caratteri del nome del figlio
	scanf("%c",&figlio.nome[i]);
	for(i=0;i<10;i++) //Idem per la madre
	scanf("%c",&mamma.nome[i]);
	for(i=0;i<10;i++) //Idem per il padre
	scanf("%c",&babbo.nome[i]); 
	figlio.mamma=&mamma; //Passo l'indirizzo del nome della mamma alla struct figlio
	figlio.babbo=&babbo; //Idem per il padre
	babbo.babbo=NULL; // Imposto a Null mamma e padre delle struct mamma e padre
	babbo.mamma=NULL;
	mamma.babbo=NULL;
	mamma.mamma=NULL;
	fun_nome(figlio); //Richiamo la funzione per stampare i nomi
	fun_nome(mamma);
	fun_nome(babbo);
	return 0;
}
