#include <stdio.h>
int main()
{
int m, n, p, q, c, d, k, sum = 0;
int first[10][10], second[10][10], multiply[10][10];     
printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF FIRST MATRIX \n");
scanf("%d%d", &m, &n);
printf("ENTER THE ELEMENTS OF FIRST MATRIX \n");
for (  c = 0 ; c < m ; c++ )
for ( d = 0 ; d < n ; d++ )
scanf("%d", &first[c][d]);
printf("ENTER THE NUMBER OF ROWS AND COLUMNS OF SECOND MATRIX  \n");
scanf("%d%d", &p, &q);
if ( n != p )
printf("CANT MULTIPLY BECAUSE %d IS NOT EQUAL TO %d \n",n,p);
else
{
printf(" ENTER THE ELEMENTS OF SECOND MATRIX \n");
for ( c = 0 ; c < p ; c++ )
for ( d = 0 ; d < q ; d++ )
scanf("%d", &second[c][d]);
for ( c = 0 ; c < m ; c++ )
{
for ( d = 0 ; d < q ; d++ )
{
for ( k = 0 ; k < p ; k++ )
{
sum = sum + first[c][k]*second[k][d];
}
multiply[c][d] = sum;
sum = 0;
}
}   
printf("PRODUCT OF MARIX:  \n");
for ( c = 0 ; c < m ; c++ )
{
for ( d = 0 ; d < q ; d++ )
printf("%d\t", multiply[c][d]);     
printf("\n");
}
}
return 0;
}
