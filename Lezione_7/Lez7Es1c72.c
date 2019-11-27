#include <stdio.h>
typedef enum {crocchette,scatolette,tonno}cibo; //creo una enum ATTENTO sono {0,1,2}
int i=0; 
typedef struct{ //definisco la struct aninima di tipo gatto
	int x;
	int eta;
	float peso;
	cibo food; // la variabile food di tipo cibo è un int
}gatto;

float media_peso(gatto v1[4]){ // funzione stupida per calcolare la media
	float med;
	for(i=0;i<4;i++){
	med+=v1[i].peso;
}
	return med/4;
}
int main(){
	gatto g[4];
	int i;
	float m;
	for(i=0;i<4;i++){ // inizializzo i paramentri dei gatti 
		scanf("%d",&g[i].x);
		scanf("%d",&g[i].eta);
		scanf("%f",&g[i].peso);
		scanf("%u",&g[i].food);
	}
	m = media_peso(g); 
	
		for(i=0;i<4;i++){ 
		if(g[i].eta<4 && g[i].peso>m) // controllo se i gatti sono di eta>4 e peso > della media
		  switch(g[i].food){ // uso lo switch perchè enum mi permette di ottenere solo int(index) non il contenuto
		  	case 0:printf("%d crocchette",g[i].x);
		  	break;
		  	case 1:printf("%d scatolette",g[i].x);
		  	break;
		  	case 2: printf("%d tonno",g[i].x);
		  	break;
		  }
	}
    return 0;
}