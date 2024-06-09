#include <stdio.h>

int main() {
    int ileliczb, liczba, suma;
    printf("Ile liczb bedzie?");
    scanf("%d", &ileliczb);

    for (int i = 0; i < ileliczb; i++)
    {
        printf("Podaj %d liczbe: ", i+1);
        scanf("%d", &liczba);
        suma = suma+ liczba;
    }
    
    printf("Suma: %d", suma);

    return 0;
}
