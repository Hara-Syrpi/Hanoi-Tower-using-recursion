#include <stdio.h>

#define FROM	"left"
#define TO	    "middle"
#define USING	"right"

void main(void)
{
    int N;

    printf("Give number of disks: ");
    scanf("%d",&N);

    hanoi(N, FROM, TO, USING );
}

void hanoi(int N, char *from, char *to, char *using)
{
    if (N > 0)
    {
        hanoi(N-1, from , using , to);
        printf ("move %s --> %s\n", from, to);
        hanoi(N-1, using, to, from);
    }
}

