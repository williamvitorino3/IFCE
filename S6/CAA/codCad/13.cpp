#include <cstdio>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x >= 0 && x <= 432 && y >= 0 && y <= 468)
        printf("dentro\n");
    else printf("fora\n");
    return 0;
}