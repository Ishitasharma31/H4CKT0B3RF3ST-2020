//contributed by ishita 

//hollow square star pattern

#include <stdio.h>  
int main()  
{  
    int r;  
    printf("Enter the number of rows");  
    scanf("%d",&r);  
    for(int i=1;i<=r;i++)  
    {  
        for(int j=1;j<=r;j++)  
        {  
            if(i==1 ||i==r||j==1||j==r)  
            {  
            printf("*");  
            }  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
      
    return 0;  
}  

//right triangle pattern 

#include <stdio.h>  
  
int main()  
{  
    int n;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }  
    return 0;  
}  

//mirrorred right angle triangle pattern

#include <stdio.h>  
  
int main()  
{  
    int n,p=1;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
        {  
          printf(" ");  
        }  
        for(int k=1;k<=p;k++)  
        {  
            printf("*");  
        }  
        printf("\n");  
        p++;  
    }  
    return 0;  
}  

//pyramid star pattern

#include <stdio.h>  
int main()  
{  
    int n,p;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=p-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       p--;  
     
      printf("\n");  
    }  
    return 0;  
}  
