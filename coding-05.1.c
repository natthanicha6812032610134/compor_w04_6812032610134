#include <stdio.h>

void countCall() {
    int counter = 0; // Non-static: ถูก reset ทุกครั้ง
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall(); // แสดง 1
    countCall(); // แสดง 1
    countCall(); // แสดง 1
    return 0;
} 