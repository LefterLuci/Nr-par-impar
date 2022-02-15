
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

    int num;

    printf("Introduceti un nr pentru a afla daca este par sau impar:\n");
    scanf("%d", &num);

    if(num&1)
    {
        printf("Nr. %d este impar.\n",num);
    }
    else
    {
        printf("Nr. %d este par.\n",num);
    }

    return 0;
}
