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
	
	 
int main(){
	

Liste l = init_liste(); 
l = ajout_debut(l,3);
l = ajout_debut(l,2);
l = ajout_debut(l,1);
l = ajout_fin(l,4);
l = ajout_fin(l,5);

afficher(l);

return(0);
}

