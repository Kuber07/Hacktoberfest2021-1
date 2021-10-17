#include<stdio.h>


int i,j,n,temp,arr[100];
int min;
int main()
{
    
    
    printf("Enter number of elements:\n");
    scanf("%d",&n);
        
    printf("Enter elements:\n"); 
    for(i=0;i<n;i++)
          scanf("%d",&arr[i]);
    
    for(i=0;i<n-1;i++) 
    {
        int min=i;
        j=i+1;
        
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        
        if(min!=i)
        {
            swap(&arr[i],&arr[min]);
        }
    }
          
    printf("sorted elements are:\n");
    for(i=0;i<n;i++)
       printf("%d\n",arr[i]);
}

void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

