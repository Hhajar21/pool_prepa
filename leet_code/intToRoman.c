#include <stdio.h>
#include <stdlib.h>

char* intToRoman(int num) {
    int values[] =    {1000, 900, 500, 400, 100, 90,  50,  40,  10,  9,   5,  4,  1};
    char *symbols[] = {"M",  "CM","D", "CD", "C", "XC","L", "XL","X", "IX","V","IV","I"};

    char *result = malloc(32 * sizeof(char));
    if (!result) return NULL;

    int i = 0, k = 0;
    while (num > 0) {
        while (num >= values[i]) {
            for (int j = 0; symbols[i][j]; j++)
                result[k++] = symbols[i][j];
            num -= values[i];
        }
        i++;
    }

    result[k] = '\0';
    return result;
}

int main() {
    printf("%s\n", intToRoman(3749));  // MMMDCCXLIX
    printf("%s\n", intToRoman(58));    // LVIII
    printf("%s\n", intToRoman(1994));  // MCMXCIV
}
