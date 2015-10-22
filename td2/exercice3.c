#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct element{

	int val;
	struct element* suivant;
};

typedef struct element Element;
typedef Element* Liste; 

Liste init_liste(){	
	
	return NULL;	
}

int estvide(Liste l){
	if(l == NULL ) { return 1;}
	else return 0;

}

void afficher(Liste l){
while(!estvide(l)){
	printf(" %d " , l->val);
	l= l->suivant;
}
}	

void libere(Liste l){
	if(!estvide(l)){
		libere(l->suivant);
		free(l);
	}
}

Liste ajout_debut(Liste l, int e){
	Liste tmp = malloc(sizeof(Element));
	tmp -> val= e;
	tmp -> suivant= l;
	return tmp;
}

Liste ajout_fin(Liste l, int e){
	Liste tmp = l;
	
	if(estvide(l)) return ajout_debut(l,e);
	while(tmp->suivant != NULL){ tmp= tmp -> suivant; }
	Liste new = malloc(sizeof(Element));
	new -> val = e ;
	new -> suivant = NULL;
	tmp -> suivant = new ;
	return l;
}
	
Liste ajout_trier(Liste l, int e){
	Liste tmp = l;
	Liste new = malloc(sizeof(Element));
	new->val=e;
	if(l==NULL || e<l->val){return ajout_debut(l,e);}
	while(tmp->suivant != NULL && e>tmp->suivant->val) {tmp = tmp->suivant;}
	new->suivant = tmp -> suivant;
	tmp -> suivant = new;
	return l;
}
	
int taille(Liste l){
	if(l==NULL) return 0;
	return 1+taille(l->suivant);
}

Liste alea_liste(int n){
	int x; 
	Liste l = init_liste();
	while(1){
		x= rand()%n;
		if(x==0) {return l;}
		else {l = ajout_debut(l,x);}
	}
}

int recherchelem(Liste l, int e){
while(!estvide(l)){
	if(e == l->val){return 1; }
		 l = l-> suivant;	
}
return 0;
}

Liste supprimelem(Liste l,int e){
		Liste p = l;
		int a = recherchelem(l,e);
		if(a==0) return l;
		else
			if(e == l->val){
				p= l -> suivant;
				free(l);
				return p;
			}
		
		while(e != l->suivant->val){
			l=l->suivant;
		}
		l->suivant = l-> suivant -> suivant;
		return p;
} 
	
// Suprimelem version enfant
Liste retirer(Liste l, int e){
	Liste temp;
	if(estvide(l)) return l;
	if(l->val == e) {
		temp = l -> suivant;
		free(l);
		return temp;}
	while(temp->suivant->val != e && temp->suivant != NULL){
		temp = temp->suivant;}
	if(temp->suivant != NULL){
		Liste v = temp->suivant;
		temp->suivant; temp->suivant->suivant;
		free(v);}
		return l;
	}
		
Liste concatener(Liste l, Liste k){
if(estvide(l)) return k;
if(estvide(k)) return l;
l -> suivant = concatener(l->suivant,k);
return l;
}	

Liste fusion(Liste l, Liste k){
	if(estvide(l)) return k;
	
	
	
	
 }

		 
int main(){
	
srand(time(NULL));

Liste l = init_liste();
l = ajout_debut(l,6);
l = ajout_debut(l,4);
l = ajout_debut(l,2);
l = ajout_debut(l,0);

Liste k = init_liste();
k = ajout_debut(k,7);
k = ajout_debut(k,5);
k = ajout_debut(k,3);
k = ajout_debut(k,1);

afficher(l);
printf(" \n" );
afficher(k);


// Toutes les fonctions jusqu'a AleaLIST OK !
return(0);
}	
