#include <stdio.h>
#include <string.h>

int main() {
    char name1[100], name2[100];

    printf("Enter name of customer 1: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = 0; // ลบ '\n' ออก

    printf("Enter name of customer 2: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = 0; // ลบ '\n' ออก

    if(strcmp(name1, name2) == 0) {
        printf("Both of your names are the same, which is %s.\n", name1);
        printf("The length of the name is %lu characters.\n", strlen(name1));
    } else {
        printf("Customer 1: %s (%lu characters)\n", name1, strlen(name1));
        printf("Customer 2: %s (%lu characters)\n", name2, strlen(name2));
    }

    return 0;
}