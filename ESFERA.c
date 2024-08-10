#include <stdio.h>

int main() {

    double raio;
    double n= 3.14159;
    scanf("%lf", &raio);
    double volume = (4.0/3) * n *(raio * raio* raio );
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
