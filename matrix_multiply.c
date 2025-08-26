#include <stdio.h>
int main(){
    
    int m, n, x, y;  int sum=0;
    
        printf("Enter your row and collum for A matrix : ");
    
        scanf("%d%d", &m ,&n);
    
        printf("Enter your row and collum for B matrix : ");
     
        scanf("%d%d", &x ,&y);
     
     
    if (n==x){
        
        int a[m][n]; int b[x][y]; int c[m][y];

        int i, j; 

        printf("this is A matrix.\n");

   for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < n; j++)
    {
        printf("A[%d][%d]= ", i, j);

        scanf("%d", &a[i][j]);
    }
    printf("\n");
   }
   
 
   
   //this is matrix B.
   
   printf("this is B matrix.\n");

   for ( i = 0; i < x; i++)
   {
    for ( j = 0; j < y; j++)
    {
        printf("B[%d][%d]= ", i, j);

        scanf("%d", &b[i][j]);
    }
    printf("\n");
   }
   
   //multiplying matrix.
   
    for ( i = 0; i < x; i++)
   {
    for ( j = 0; j < y; j++)
    {
        for (int k=0; k<n; k++){
            
            sum=sum+a[i][k]*b[k][j];
           
        }
        c[i][j]=sum;
        sum=0; 
    }
   
   }
   
   
   
     printf("your A matrix is :\n ");
   //printing A matrix.
   for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < n; j++)
    {
        printf("\t %d  ", a[i][j]);

    }
    printf("\n");
   }
   
   printf("& ");
   
   printf("your B matrix is :\n ");
   //printing B matrix.
   for ( i = 0; i < x; i++)
   {
    for ( j = 0; j < y; j++)
    {
        printf("\t %d  ", b[i][j]);

    }
    printf("\n");
   }
   
   //matrix addition.
   
   printf("multiply of your two matrix is :\n");
   
    for ( i = 0; i < m; i++)
   {
    for ( j = 0; j < y; j++)
    {
        
        printf("\t %d", c[i][j]);

    }
    printf("\n");
   }
   
} 

else printf("your matrixs can't be multiply!....cheek the conditions for multiply and try again.");
   
   return 0; 
}
