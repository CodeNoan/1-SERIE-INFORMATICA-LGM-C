// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //Questao 1
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 >= n2 && n1 >= n3)
    {
        printf("%d e o maior", n1);
    }
    else if(n1 <= n2 && n2 >= n3)
    {
        printf("%d e o maior", n2);
    }
    else if (n3 >= n1 && n3 >= n2)
    {
        printf("%d e o maior", n3);
    }

    return 0;
}
