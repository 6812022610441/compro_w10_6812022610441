#include <stdio.h>
#include <string.h>

int main() {
    char name1[100], name2[100]; // ประกาศตัวแปรสำหรับเก็บชื่อที่มีช่องว่าง

    printf("Enter name of customer 1: "); // รับชื่อที่มีช่องว่าง
    fgets(name1, sizeof(name1), stdin); // อ่านชื่อที่มีช่องว่าง
    name1[strcspn(name1, "\n")] = 0; // ลบ '\n' ออก

    printf("Enter name of customer 2: "); // รับชื่อที่มีช่องว่าง
    fgets(name2, sizeof(name2), stdin); // อ่านชื่อที่มีช่องว่าง
    name2[strcspn(name2, "\n")] = 0; // ลบ '\n' ออก

    if(strcmp(name1, name2) == 0) {
        printf("Both of your names are the same, which is %s.\n", name1); // แสดงชื่อที่เหมือนกัน
        printf("The length of the name is %ln characters.\n", strlen(name1)); // แสดงความยาวของชื่อ
    } else {
        printf("Customer 1: %s (%ln characters)\n", name1, strlen(name1)); // แสดงชื่อและความยาวของชื่อลูกค้าคนที่ 1
        printf("Customer 2: %s (%ln characters)\n", name2, strlen(name2)); // แสดงชื่อและความยาวของชื่อลูกค้าคนที่ 2
    }

    return 0;
}