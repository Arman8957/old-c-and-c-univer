#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char arman[30];
    fgets(arman,30, stdin);
    for(int i=0;i<n;i++){
        fgets(arman,30, stdin);
        int flag = 0;
        if(isalpha(arman[0]) || arman[0]=='_'){
                for(int  j=0;j<strlen(arman)-1;j++){
                    if (isdigit(arman[j]) || isalpha(arman[j]) || arman[j]=='_'){
                        flag =1;
                    }
                    else{
                        flag =0;
                    }
                }
                }
        if(flag ==1){
            printf("Valid \n");
        }
        else{
            printf("Invalid \n");
        }
        }
}
