#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct noktatipi
{
    int x, y;
};

struct noktatipi oku(void);
float mesafe_fon(struct noktatipi*, struct noktatipi*);

int main(void)
{
    struct noktatipi n1, n2;
    float mesafe;

    n1 = oku();
    n2 = oku();

    mesafe = mesafe_fon(&n1, &n2);
    printf("Iki noktanin arasindaki mesafe: %5.2f", mesafe);
    return 0;
}

struct noktatipi oku(void)
{
    struct noktatipi gecici;
    printf("Noktanin x ve y koordinatlarini giriniz:");
    scanf("%d %d", &gecici.x, &gecici.y);
    return (gecici);
}

float mesafe_fon(struct noktatipi *a, struct noktatipi *b)
{
    float uz1 = pow((a->x - b->x), 2);
    float uz2 = pow((a->y - b->y), 2);
    return (sqrt(uz1+uz2));
}


