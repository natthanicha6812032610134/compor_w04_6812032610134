#include <stdio.h>

int main() {
    int score = 90.5; // int ไม่รองรับทศนิยม
    printf("Score = %d\n", score); // จะแสดงผลไม่ถูกต้อง เช่น 90 หรือค่าผิด
    return 0;
}