#include <stdio.h>

int TOH(int n,char x,char y,char z, short count)
{
    if (n>0){
        count = TOH(n-1, x, z, y, count);
        count += 1;
        printf("Step %2d: Move disk %d from peg %c to peg %c\n",count,n, x, y);
        count = TOH(n-1, z, y, x, count);
    }
    return count;
}



int main()
{
    short count = 0;
    int sc;
    int n = 3; 
    sc = TOH(n, 'A', 'B', 'C',count); 
    system("pause");
}