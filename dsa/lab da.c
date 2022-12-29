#include <stdio.h>
int main()
{
    for (int i = 1; i <= 6; i++)
        for (int j = i; j <= i; j++)
            printf("j");
}
