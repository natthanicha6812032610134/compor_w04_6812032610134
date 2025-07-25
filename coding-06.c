#include <stdio.h>

const int GLOBAL_RATE = 10; // ค่าคงที่ระดับ global ใช้ได้ทุกที่

void calculate() {
    const int LOCAL_BONUS = 50; // ค่าคงที่ระดับ local ใช้ได้ในฟังก์ชันนี้

    // แสดงค่าทั้ง global และ local
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS in function = %d\n", LOCAL_BONUS);
}

int main() {
    calculate(); // เรียกใช้ฟังก์ชันที่มี local constant

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE); // ใช้ global ได้ใน main

    // LOCAL_BONUS จะ error เพราะอยู่นอก scope
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS);

    return 0;
}