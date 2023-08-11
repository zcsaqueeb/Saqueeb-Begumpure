#include<stdio.h>

int main() {
    int n, i;
    int fact =1;
    i = 1;
    printf("Enter a number: \n");
    scanf("%d", &n);
    while (i <= n) {
        fact = fact * i;
        i++;
    }
    printf("The final factorial is %d\n", fact);
    return 0;
}