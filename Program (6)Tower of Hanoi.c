#include <stdio.h>

void towers(int, char, char, char);
 
int main()
{
    int n;
 
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(n, 'A', 'C', 'B');
    return 0;
}
void towers(int n, char src, char aux, char dest)
{   
    if (n<=0)
        printf("\nInsufficient Disks\n");
    else if (n == 1)
    {
        printf("\n Move disk 1 from %c to %c", src, dest);
    }
    else {
    towers(n - 1, src,dest,aux);
    printf("\n Move disk %d from  %c to %c", n, src, dest);
    towers(n - 1, aux,src,dest);
    }
}
