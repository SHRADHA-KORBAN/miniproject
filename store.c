#include<stdio.h>
#include "store.h"

void customers_details() {
    char customers_name[20];
    int customers_id;
    int customers_phno;
    printf("Enter customer's name: ");
    scanf("%s", customers_name);
    printf("Enter customer's ID: ");
    scanf("%d", &customers_id);
    printf("Enter customer's phone number: ");
    scanf("%d", &customers_phno);
}

void menu() {
    printf("1 ITEMS = SOCKS, PEN, MANGO, VEGETABLES, APPLE, ORANGE, WATER BOTTLE, SANITIZER, FACEWASH, BOOKS\n");
    printf("2 ITEMS IN STOCK are SOCKS, PEN, MANGO, VEGETABLES, APPLE, ORANGE, WATER BOTTLE, SANITIZER\n");
    printf("3 PRICE FOR EACH ITEM IS SOCKS =(70), PEN =(25), MANGO =(100), VEGETABLES =(235), APPLE =(120), ORANGE =(40), WATER BOTTLE=(200), SANITIZER =(50), FACEWASH=(80), BOOKS =(120)\n");
}

void bill() {
    int total_amount = 0;
    int choice = 1;
    while ((choice != 0) && (choice < 9)) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("TO BUY SOCKS\n");
                total_amount += 70;
                break;
            case 2:
                printf("TO BUY PEN\n");
                total_amount += 25;
                break;
            case 3:
                printf("TO BUY MANGO\n");
                total_amount += 100;
                break;
            case 4:
                printf("TO BUY VEGETABLES\n");
                total_amount += 235;
                break;
            case 5:
                printf("TO BUY APPLE\n");
                total_amount += 120;
                break;
            case 6:
                printf("TO BUY ORANGE\n");
                total_amount += 40;
                break;
            case 7:
                printf("TO BUY WATER BOTTLE\n");
                total_amount += 200;
                break;
            case 8:
                printf("TO BUY SANITIZER\n");
                total_amount += 50;
                break;
            default:
                printf("EXIT\n");
                break;
        }
    }
    printf("Total is = %d\n", total_amount);
}
