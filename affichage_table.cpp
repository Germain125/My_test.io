#include <stdio.h>
main()
{
const int MAX = 10; /* nombre de lignes et de colonnes */
int I; /* compteur des lignes */
int J; /* compteur des colonnes */

/* Affichage de l'en-tête */

printf(" X*Y I");
for (J=0 ; J<=MAX ; J++)
printf("%4d", J);
printf("\n");
printf("------");
for (J=0 ; J<=MAX ; J++)
printf("----");
printf("\n");

/* Affichage du tableau */
for (I=0 ; I<=MAX ; I++)
{
printf("%3d I", I);
for (J=0 ; J<=MAX ; J++)
printf("%4d", I*J);
printf("\n");
}
return 0;
}
