#include <stdio.h>
#include <string.h>

// Function to convert currency
float convertCurrency(float amount, float exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    float amount;
    float exchangeRate;
    char fromCurrency[4]; // Assuming currency code will be 3 characters long
    char toCurrency[4];   // Assuming currency code will be 3 characters long

    // Get input from user
    printf("Ingresar cantidad a convertir: ");
    scanf("%f", &amount);

    printf("Ingresar la moneda inicial a convertir (USD, EUR, GTQ): ");
    scanf("%s", fromCurrency);

    printf("Ingresar la moneda a la que quiere convertir (USD, EUR, GTQ): ");
    scanf("%s", toCurrency);

    // Assuming exchange rates are predefined
    // You can modify these values with actual exchange rates
    if (strcmp(fromCurrency, "USD") == 0 && strcmp(toCurrency, "EUR") == 0)
        exchangeRate = 0.88; // Example exchange rate from USD to EUR
    else if (strcmp(fromCurrency, "USD") == 0 && strcmp(toCurrency, "GTQ") == 0)
        exchangeRate = 7.75; // Example exchange rate from USD to GTQ
    else if (strcmp(fromCurrency, "EUR") == 0 && strcmp(toCurrency, "USD") == 0)
        exchangeRate = 1.13; // Example exchange rate from EUR to USD
    else if (strcmp(fromCurrency, "EUR") == 0 && strcmp(toCurrency, "GTQ") == 0)
        exchangeRate = 8.79; // Example exchange rate from EUR to GTQ
    else if (strcmp(fromCurrency, "GTQ") == 0 && strcmp(toCurrency, "USD") == 0)
        exchangeRate = 0.13; // Example exchange rate from GTQ to USD
    else if (strcmp(fromCurrency, "GTQ") == 0 && strcmp(toCurrency, "EUR") == 0)
        exchangeRate = 0.11; // Example exchange rate from GTQ to EUR
    else {
        printf("Unsupported conversion.\n");
        return 1;
    }

    // Convert currency and display result
    float convertedAmount = convertCurrency(amount, exchangeRate);
    printf("%.2f %s es igual a %.2f %s\n", amount, fromCurrency, convertedAmount, toCurrency);

    return 0;
}

