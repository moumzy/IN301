#include <stdio.h>
#include <time.h>

int alea(int n){
int nbr;
nbr = (rand() % n );
return nbr;	
}

struct Tableau{
	int taille;
	int tab[100];
};

typedef struct Tableau Tab;

Tab initialise_tableau(int n){
	int i;
	Tab c;
	c.taille = n;
	for(i=0; i<c.taille; i++){
		c.tab[i] = alea(20); 
	}
return c;
}

void affiche_element_tableau(Tab b){
	int i;
	for(i=0; i<19; i++){
		printf("%d \n", b.tab[i]);
	}
}
	
int produit_elements(Tab d, int n){
	int s =0;
	int i;
	for(i=0; i<n; i++)
	{
		s = s * d.tab[i];
	}	
	return s;
}
	
	
int main(){
srand(time(NULL));
int n=10;
int i,s;
	
 // printf(" %lu " , sizeof(Tab) ) ;	

// printf(" %d " , alea(n) ) ;

Tab a;
a = initialise_tableau(20);
affiche_element_tableau(a);
printf(" %d ", produit_elements(a,10));

}

//VERIFIER prog car le produit est egal a 0
// voir petite feuille language C
