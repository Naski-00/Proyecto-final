#include <stdio.h>
#include <stdlib.h>
#define lim 10

int main(int argc, char const *argv[])
{
    int num=1;
    do{
        printf("%d\n",num);
        num++;
    }
    while(num<=lim);
    return 0;
}
