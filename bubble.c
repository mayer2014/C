#include <stdio.h>  
void bubbleSort(int * pArr, int cnt)  
{  
    int i,j,tmp;  
    for(i=0;i<cnt;i++)  
    {  
        for(j=i+1;j<cnt;j++)  
        {  
            if(*(pArr+i)>*(pArr+j))  
            {  
                tmp=*(pArr+i);  
                *(pArr+i)=*(pArr+j);  
                *(pArr+j)=tmp;  
            }  
        }  
    }  
}  
  
  
int main(void)  
{  
    int cnt;  
    printf("input array length:\n");  
    scanf("%d",&cnt);  
    if(cnt<1)  
    {  
        printf("array length must be larger 0 \n");  
        return 1;  
    }  
    else  
    {  
        printf("array length is %d \n",cnt);  
    }  
    int a[cnt];  
    int i;  
    for(i=0;i<cnt;i++)  
    {  
        printf("input arr[%d] value\n",i);  
        scanf("%d", &a[i]);  
    }  
    bubbleSort(a,cnt);  
    printf("bubblesort result:\n");  
    for(i=0;i<cnt;i++)  
    {  
        printf("%d ",a[i]);  
    }  
    printf("\n");  
    return 0;  
}  
