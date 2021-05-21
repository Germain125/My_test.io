#include <stdio.h>
#include <math.h>
main()
{
/* Calcul des solutions reelles et complexes d'une equation du second degre */
int A, B, C;
double D; /* Discriminant */
printf("Calcul des solutions reelles et complexes d'une equation du second \n");
printf("degre de la forme ax^2 + bx + c = 0 \n\n");
printf("Introduisez les valeurs pour a, b, et c : ");
scanf("%i %i %i", &A, &B, &C);
/* Calcul du discriminant b^2-4ac */
D = pow(B,2) - 4.0*A*C;
/* Distinction des differents cas */
if (A==0 && B==0 && C==0) /* 0x = 0 */
printf("Tout reel est une solution de cette equation.\n");
else if (A==0 && B==0) /* Contradiction: c # 0 et c = 0 */
printf("Cette equation ne possede pas de solutions.\n");
else if (A==0) /* bx + c = 0 */
{
printf("La solution de cette equation du premier degre est :\n");
printf(" x = %.4f\n", (double)C/B);
}
else if (D<0) /* b^2-4ac < 0 */
{
printf("Les solutions complexes de cette equation sont les suivantes :\n");
printf("x1 = %.4f + i%.4f\n", (double)(-B),(double)(sqrt(-D)/(2*A))) ;
printf("x2 = %.4f + i%.4f\n", (double)(-B),(double)(-sqrt(-D)/(2*A))) ;
}
else if (D==0) /* b^2-4ac = 0 */
{
printf("Cette equation a une seule solution reelle :\n");
printf(" x = %.4f\n", (double)-B/(2*A));
}
else /* b^2-4ac > 0 */
{
printf("Les solutions reelles de cette equation sont :\n");
printf(" x1 = %.4f\n", (double)(-B+sqrt(D))/(2*A));
printf(" x2 = %.4f\n", (double)(-B-sqrt(D))/(2*A));
}
return 0;
}
