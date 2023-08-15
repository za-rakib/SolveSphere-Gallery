#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,m;
    printf("input the number of element: \n");
    scanf("%d",&n);
    // n=5;
    int * ptr;
    ptr = (int*) malloc(n*sizeof(int));
    if(ptr==NULL) printf("Memory allocation faild!");
    else
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0; i<n; i++)
        {
            printf("%d  \n",*(ptr+i));
        }

    }
    printf("input increase number: \n");
    scanf("%d",&m);
    // n=10;
    ptr =(int*)realloc(ptr,n*sizeof(int));
    if(ptr==NULL) printf("Memory allocation faild!");
    else
    {
        for(i=n; i<n+m; i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0; i<n+m; i++)
        {
            printf("%d  \n",*(ptr+i));
        }

    }
    return 0;
}
