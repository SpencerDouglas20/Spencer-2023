#include <stdio.h>

int TOH(int n,char x,char y,char z)
{
    int count = 0;
    if(n>0){
        count = TOH(n-1, x, z, y);
        printf("\nMove disk %d from peg %c to peg %c",n, x, y);
        count++;
        count += TOH(n-1, z, y, x);
    }
    return count;
}

int main()
{
    int sc;
    int n = 3; 
    sc = TOH(n, 'A', 'C', 'B'); 
    printf("\nTowers of Hanoi completed in %d steps", sc);
    return 0;
}