#include <stdio.h>
//#include <stdlib.h>

int main()
{
    char ch;
    ch = 65;
    printf("ch = %c\n", ch);
    ch='A';
    printf("ch = %c\n", ch);
    printf("ch = ");
    scanf("%c", &ch);
    printf("ASCII code= %d\n", ch);

    if (ch>='a' && ch<='z')
    {
        ch -=('a'-'A')*(ch>='a' && ch<='z'); // sau dau * la dieu kien thuc thi
    }
    else
    {
        ch +=('a'-'A')*(ch>='A' && ch<='Z'); // sau dau * la dieu kien thuc thi
    }

    printf("UpperCase = %c\n",ch);
    return 0;
}
