#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char x=1;
    unsigned char y=1;
    unsigned int size;



    printf("enter the size \n");
    scanf("%i",&size);

    for(x=1;x<=size;x++)
    {
        for(y=1;y<=size-x;y++)
        {
            printf(" ");
        }
        for(y=1;y<=size;y++)
        {
            if(x==1 || x==size || y==1|| y==size )
            {
                    printf("*");

            }
            else
            {
                    printf(" ");

            }
        }
        printf("\n");
    }


    return 0;
}
