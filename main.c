#include <stdio.h>

int countOccurrences(int *tab, int n, int x) {
    int count = 0,*p;

    for (p = tab; p < tab + n; p++) {
        if (*p == x) {
            count++;
        }
    }

    return count;
}

int main() {
    int tab[100], n, x, *p, result;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    for (p = tab; p < tab + n; p++) {
        printf("Enter a value: ");
        scanf("%d", p);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &x);

    result = countOccurrences(tab, n, x);

    printf("Number of occurrences of %d is %d", x, result);

    return 0;
}
