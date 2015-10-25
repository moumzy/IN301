#include <stdio.h>
#include <stdlib.h>
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


Tab initialise_tablo(n){
	Tab a;
	int i;
	a.taille = n;
	for(i=0;i<a.taille;i++){
	a.tab[i] = alea(20);
}
return a;
}

void affiche_element_tablo(Tab a, int n){
	int i=0;
	for(i=0;i<n;i++){
	printf(" %d \n " , a.tab[i]);
}
}

int produit_elements_tablo(Tab a, int n){
	int i ;
	int s= a.tab[0];
	for(i=1;i<n;i++)
	{
		s = s * a.tab[i];
	}
	
return s;	
}

int main(){
Tab a;
int s;
srand(time(NULL));
// printf( "%lu", sizeof(Tab));

a = initialise_tablo(20);
affiche_element_tablo(a,20);
// s = produit_elements_tablo(a,3);    probleme avec cette fonction
printf( "%d" , s);

}


