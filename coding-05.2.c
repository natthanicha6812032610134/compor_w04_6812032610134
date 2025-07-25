#include <stdio.h>

void countCall() {
    static int counter = 0; // static: จำค่าครั้งก่อนหน้าได้
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall(); // แสดง 1
    countCall(); // แสดง 2
    countCall(); // แสดง 3
    return 0;
}