#include<stdio.h>
#include "store.h"

int main() {
    printf("WELCOME TO PES STORE\n");
    int n;
    printf("Enter number of customers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Customer %d\n", i);
        customers_details();
        menu();
        bill();
    }

    return 0;
}

    