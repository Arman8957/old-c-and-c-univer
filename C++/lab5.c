

#include <stdio.h>
#include <string.h>
main()
{
    char arman[30];
    int n;
    printf("Enter No. of Production: ");
    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++)
    {
        printf("Enter  string: ");
        scanf("%[^\n]%*c",&arman);
        int length = strlen(arman);
        if(arman[0] == arman[3])
        {
            printf("Left Recursion: \n");

                printf("%c->", arman[0]);
                for(int k=4; k<length; k++)
                {
                    if(arman[k] == '|'){
                        int l=k+1;
                        for(int j=l; j<length; j++)
                        {
                            printf("%c", arman[j]);
                        }
                        printf("%c\'",arman[0]);
                    }
                }
                printf("\n");
                printf("%c\'->",arman[0]);
                for(int z=4; arman[z]!='|'; z++)
                {
                    printf("%c",arman[z]);
                }
                printf("%c\'|$",arman);
                printf("\n");
        }


         else{
            printf(" doesn't no have recursion .....");
         }

}
}

