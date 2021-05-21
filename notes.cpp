#include <stdio.h>
int main(){
	float tab[5]; /* Déclaration de la table*/
	
	/*Déclaration des entiers*/
	int moyenne; 
	int n,i,k,somme;
	
	/*Condition for*/

	for (i=0; i<5; i++){
	printf("\n Entrer la note %d:" ,i+1);
	scanf("%f" , &tab[i]);
		}
		somme = 0;
		for(i=0;i<5;i++)
		{somme=somme+tab[i];
		}
		printf("\n la somme des notes est %d:", somme);
		
		moyenne=0;
		for(i=0;i<5;i++){
		moyenne=somme/tab[i];
		}
		/*Afficher la moyenne de l_eleve*/
		printf("\n la moyenne est %2f:", moyenne);
		/*Afficher la note qui est superieure a la moyenne*/
	printf("\n le nombre de notes superieure a la moyenne est %d",k);
}
