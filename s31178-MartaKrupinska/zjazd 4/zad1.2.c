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
    
    int kod= suma % 256;
    printf("Suma: %d\n", suma);
    printf("Kod zakonczenia: %d", kod);

    return kod;
}

