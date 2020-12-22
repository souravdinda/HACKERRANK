#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = n;
    char space = ' ';
    char hash = '#';
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < a - 1; j++)
        {
            printf("%c", space);
        }
        
        a--;
        
        for(int k = 0; k < i + 1; k++)
        {
            printf("%c", hash);
        }
        printf("\n");
    }
    return 0;
}

