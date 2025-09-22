#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Conversao de Celsius para Fahrenheit\n");
    printf("====================================\n");
    printf("Celsius    Fahrenheit\n");
    printf("-------    ----------\n");
    
    for(celsius = 10; celsius <= 100; celsius += 10) {
        fahrenheit = (celsius * 9.0/5.0) + 32.0;
        printf("%6.1f°C    %6.1f°F\n", celsius, fahrenheit);
    }
    
    return 0;
}
