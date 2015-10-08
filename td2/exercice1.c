#include <stdio.h>


void permuter(int *a, int *b){
	int c;
	c = *b;
	*b = *a;
	 *a = c;
}

int main(){
	
char tab[10];
char (*p)[10] = &tab ;
int a = 2;
int b = 5;

printf(" %lu " ,sizeof(char) ) ;
printf(" %lu " ,sizeof(int) ) ;
printf(" %lu " ,sizeof(double) ) ;
printf(" %lu " ,sizeof(char*) ) ;
printf(" %lu " ,sizeof(void*) ) ;
printf(" %lu " ,sizeof(int*) ) ;
printf(" %lu \n \n" ,sizeof(double*) ) ; 
 

printf(" %lu " ,sizeof(int[10]) ) ; 
printf(" %lu \n \n" ,sizeof(char[7][3]) ) ; 
// print f erreur car pas de taille //

printf(" %lu " ,sizeof(tab) ) ;
printf(" %lu " ,sizeof(tab[0]) ) ;
printf(" %lu " ,sizeof(&tab[0]) ) ; 
printf(" %lu " ,sizeof(*&tab) ) ; 
printf(" %lu \n \n \n" ,sizeof(*&tab[0]) ) ;
// ttcompris //

   
printf(" %lu " ,sizeof(p) ) ;
printf(" %lu " ,sizeof(*p) ) ; 
printf(" %lu " ,sizeof((*p)[2]) ) ; 
printf(" %lu " ,sizeof(&(*p)[2]) ) ; 
printf(" %lu " ,sizeof(&(*p)[2]) ) ; 


printf(" \n%d  %d \n" , a , b);

permuter(&a,&b);

printf(" \n%d  %d \n" , a , b);





}	
	





	
  
	
	
	
	
	
	
	

