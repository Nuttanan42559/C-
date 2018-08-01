#include "stdio.h"
main(){int x, i; printf("Enter the width : "); scanf("%d",&x);
for (i=1 ; i<=x ; i++){ for (int y=1 ; y<=x ; y++)
{if (i==1 || i==x || y==1 || y==x){	printf("*");}else{printf(" ");}}printf("\n");}}
