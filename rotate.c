#include <stdio.h>

int main() {
    int i,n,k,j;
   
        scanf("%d %d",&n,&k);
        int a[n];
        for(i=0;i<n;i++)
        {
         scanf("%d",&a[i]);  
        }
        for(i=k;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        for(i=0;i<k;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    
    return 0;
}
