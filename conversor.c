#include <stdio.h>

float convert(float amount, float exchangeRate, int to) {
    if (to) {
        return amount * exchangeRate;
    } else {
        return amount / exchangeRate;
    }
}

int main() {
    float amount;
    int choice, from, to;

    printf("Ingrese la cantidad de dinero: ");
    scanf("%f", &amount);

    printf("Seleccione la moneda de origen:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares\n");
    printf("3. Euros\n");
    printf("Ingrese su elección: ");
    scanf("%d", &from);

    printf("Seleccione la moneda a la que desea convertir:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares\n");
    printf("3. Euros\n");
    printf("Ingrese su elección: ");
    scanf("%d", &to);

    if (from == to) {
        printf("La moneda de origen y destino son las mismas.\n");
        return 0;
    }

    switch (from) {
        case 1: // Quetzales
            switch (to) {
                case 2: // Dólares
                    printf("%.2f quetzales son %.2f dólares\n", amount, convert(amount, 0.13, 1));
                    break;
                case 3: // Euros
                    printf("%.2f quetzales son %.2f euros\n", amount, convert(amount, 0.11, 1));
                    break;
            }
            break;
        case 2: // Dólares
            switch (to) {
                case 1: // Quetzales
                    printf("%.2f dólares son %.2f quetzales\n", amount, convert(amount, 7.8, 1));
                    break;
                case 3: // Euros
                    printf("%.2f dólares son %.2f euros\n", amount, convert(amount, 0.88, 1));
                    break;
            }
            break;
        case 3: // Euros
            switch (to) {
                case 1: // Quetzales
                    printf("%.2f euros son %.2f quetzales\n", amount, convert(amount, 9.3, 1));
                    break;
                case 2: // Dólares
                    printf("%.2f euros son %.2f dólares\n", amount, convert(amount, 1.13, 1));
                    break;
            }
            break;
        default:
            printf("Opción inválida\n");
            break;
    }

    return 0;
}