#include <stdio.h>

int main() {
    char name = 'N'; //ตัวอักษรตัวแรกองชื่อ
    int age = 19; //อายุ
    double weight = 110.5; //น้ำหนัก

    printf("Student %c is %d years old.\n", name, age);
    printf("His weighs is %.1f kg.\n", weight);

    return 0; 
}