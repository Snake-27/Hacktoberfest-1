#include<stdio.h>
int main(void)
{
    int x;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
}

