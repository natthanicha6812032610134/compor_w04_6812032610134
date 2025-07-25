 #include <stdio.h>

int main() {
    char nameInitial = 'K';     // ใช้ char สำหรับตัวอักษร 1 ตัว
    int age = 20;               // ใช้ int สำหรับอายุ
    float weight = 48.5;        // ใช้ float สำหรับน้ำหนัก
    char gender[] = "Female";   // ใช้ string (char array) สำหรับเพศ

    // แสดงผลค่าตัวแปรออกทางหน้าจอ
    printf("Initial: %c\n", nameInitial);
    printf("Age: %d\n", age);
    printf("Weight: %.1f\n", weight);
    printf("Gender: %s\n", gender);

    return 0; // ไม่มี error
}