#include <stdio.h>




void reinitPointeur(int** p){
	*p = NULL;
}


int main(){
	
	
int a = 1;
int* p = &a;

// pointeur de pointeur
reinitPointeur(&p);	
	
printf(" %p " , p );		
}
