#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
        int num;
    num = 105;
    while (num >= 1){
        if (num%2 == 1){
        printf( "%d, ", num);
        }
        num--;
    }

    return 0;
}
