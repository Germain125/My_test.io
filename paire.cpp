#include<stdio.h>
int main(){
int a, b;
printf("entrer un nombre: ");
scanf("%d" , &a);
printf("saisir le second nombre: ");
scanf("%d" , &b);
if((a>b) || (b>a))
{
  scanf("le max est: " "%d" , &a);
}
else
{
	scanf("le max est: " "%d , &b");
}
}
