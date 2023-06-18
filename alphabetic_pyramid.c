#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows in the pyramid: ");
    scanf("%d", &n);//5
    int k = 0;
    for (int i = 1; i <= n; i++) {//3<5
            char ch = 'A';//A
        for (int j = 1; j <= n+k; j++){//1<7
            if (j <= n- i)//3<=2
            {
            printf(" ");   // ++++A
                           // +++ABA
                           // ++ABCBA
            }
            else if(j<=(n * 2 -1) / 2){//7<=4
            printf("%c",ch++);//C
            }
            else{
                printf("%c",ch--);//@
            }
        }
        k++;//2
        printf("\n");
    
    }
    return 0;
}
