#include <stdio.h>

int main() {
    int godziny;
    char pojazd;
    double oplata;

    printf("Podaj liczbę godzin parkowania: ");
    scanf("%d", &godziny);

    printf("Podaj typ pojazdu (S - samochód, M - motocykl, A - autobus): ");
    getchar(); // Oczyszczenie bufora po poprzednim scanf
    scanf("%c", &pojazd);

   
    switch(pojazd) {
        case 'S':
        case 's':
            oplata = godziny * 5.0;
            printf("Opłata za parkowanie samochodu: %.2f zł\n", oplata);
            break;
        case 'M':
        case 'm':
            oplata = godziny * 3.0;
            printf("Opłata za parkowanie motocykla: %.2f zł\n", oplata);
            break;
        case 'A':
        case 'a':
            oplata = godziny * 10.0;
            printf("Opłata za parkowanie autobusu: %.2f zł\n", oplata);
            break;
        default:
            printf("Nieznany typ pojazdu! Wprowadź 'S', 'M' lub 'A'.\n");
            break;
    }

    return 0;
}
