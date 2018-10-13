#include <stdio.h>

int main() {
    int a, b, wynik = 0;
    char znak;

    printf("Podaj pierwszą liczbę: ");
    scanf(" %i", &a);
    printf("Podaj operator: ");
    scanf(" %c", &znak);
    printf("Podaj drugą liczbę: ");
    scanf(" %i", &b);

    switch (znak) {
        case '+':
            wynik = a + b;
            break;
        case '-':
            wynik = a - b;
            break;
        case '*':
            wynik = a * b;
            break;
        case '/':
            if (a == 0 || b == 0) {
                printf("Nie dzielimy przez zero!\n ");
            } else {
                wynik = a / b;
    }
            break;
        default: printf("Zły operator\n");
    }

    wynik
    ?
    printf("Wynik: %i\n", wynik)
    :
    printf("Nie wykonano");

    return 0;
}