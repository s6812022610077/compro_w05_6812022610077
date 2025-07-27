#include<stdio.h>

int main(){

    char First_name = 'C';
    int age = 18;
    float weight = 49.5;

    printf("Student %c is %d years old.\n", First_name, age);
    printf("His weight is %.1f kg.", weight);

    return 0;

}

/*

บรรทัดที่ 1 ประกาศเรียกใช้ stdio.h
บรรทัดที่ 3 กำหนดฟังก์ชัน main
บรรทัดที่ 5 ประกาศตัวแปร char ชื่อ First_name = 'C' เลือกใช้ char เพราะเป็นตัวอักษรตัวเดียว 
บรรทัดที่ 6 ประกาศตัวแปร int ชื่อ age = 18 เลือกใช้ int เพราะอายุเป็นจำนวนเต็ม
บรรทัดที่ 7 ประกาศตัวแปร float ชื่อ weight = 49.5 เลือกใช้ float เพราะน้ำหนักเป็นเลขที่มีทศนิยม
บรรทัดที่ 9 ใช้คำสั่งแสดงผล printf ใช้ format code %c %d เพื่อเรียกใช้ข้อมูลตัวแปร First_name และ age ตามลำดับ โดยformat code เลือกจากค่าของตัวแปรที่ต้องการแสดงผล 
บรรทัดที่ 10 ใช้คำสั่งแสดงผล printf ใช้ format code %.1f .1เพื่อกำหนดว่าต้องการทศนิยม 1 ตำแหน่ง เพื่อเรียกใช้ข้อมูลตัวแปร weight โดยformat code เลือกจากค่าของตัวแปรที่ต้องการแสดงผล  
บรรทัดที่ 12 คืนค่าเป็น 0

*/