#include <stdio.h>
#include <string.h>

int main() { 
    char name[30];
    int age;
    float height;

    char subject[0];
    float GPA;
    char Grade;

    printf("Enter your first name age hight(in c.m.) (e.g. Chotika 18 151.0): ");
    scanf("%s %d %f", name, &age, &height); 

    printf("Enter your First_character_subject GPA Grade (e.g. M 3.00 B): ");
    scanf("%s %f %c", subject, &GPA, &Grade); 

    printf("%c is %d years old and %.1f centimeters tall.\n", name[0], age, height);
    printf("In subject %c, %c got %.2f which is symbolized as '%c'\n", subject[0], name[0], GPA, Grade);

    return 0;
}

/*
บรรทัดที่ 1 ประกาศเรียกใช้ stdio.h
บรรทัดที่ 2 ประกาศเรียกใช้ string.h
บรรทัดที่ 4 กำหนดฟังก์ชัน main
บรรทัดที่ 5 ประกาศตัวแปร char ชื่อ name มีขนาด 30 เลือกใช้ char name[30] เพราะต้องการรับชื่อจริง
บรรทัดที่ 6 ประกาศตัวแปร int ชื่อ age เลือกใช้ int เพราะอายุเป็นจำนวนเต็ม
บรรทัดที่ 7 ประกาศตัวแปร float ชื่อ height เลือกใช้ float เพราะต้องการรับค่าส่วนสูงที่มีทศนิยม
บรรทัดที่ 9 ประกาศตัวแปร char ชื่อ subject มีขนาด 0 เลือกใช้ char subject[0] เพราะต้องการรับตัวอักษรตัวแรกของชื่อวิขา
บรรทัดที่ 10 ประกาศตัวแปร float ชื่อ GPA เลือกใช้ float เพราะ ต้องการเก็บค่าเกรดเฉลี่ยซึ่งเป็นทศนิยม
บรรทัดที่ 11 ประกาศตัวแปร char ชื่อ Grade เลือกใช้ char เพราะต้องการรับเกรดแทนด้วยตัวอักษรแบบไม่มีประจุ
บรรทัดที่ 13 ใช้คำสั่งแสดงผล printf แสดงผลเรียกเก็บข้อมูล
บรรทัดที่ 14 ใช้คำสั่ง scanf เพื่อจัดเก็บข้อมูลที่เรียกถาม โดยใช้ format code %s %d %f เพื่อเก็บข้อมูลตัวแปร name age height ตามลำดับ โดยformat code เลือกใช้ตามลักษณะข้อมูล
บรรทัดที่ 16 ใช้คำสั่งแสดงผล printf แสดงผลเรียกเก็บข้อมูล
บรรทัดที่ 17 ใช้คำสั่ง scanf เพื่อจัดเก็บข้อมูลที่เรียกถาม โดยใช้ format code %s %f %d เพื่อเก็บข้อมูลตัวแปร subject GPA Grade ตามลำดับ โดยformat code เลือกใช้ตามลักษณะข้อมูล
บรรทัดที่ 19 ใช้คำสั่งแสดงผล printf ใช้ format code %c %d %.1f เพื่อเรียกใช้ข้อมูลตัวแปร name[0] ใส่ขนาด 0 ที่ตัวแปร name เพราะต้องการตัวอักษรตัวแรกเท่านั้น , age, height ตามลำดับ โดยformat code เลือกจากค่าของตัวแปรที่ต้องการแสดงผล
บรรทัดที่ 20 ใช้คำสั่งแสดงผล printf ใช้ format code %c %c %.2f %c เพื่อเรียกใช้ข้อมูลตัวแปร subject[0], name[0] ใส่ขนาด 0 ที่ตัวแปร subject, name เพราะต้องการตัวอักษรตัวแรกเท่านั้น , GPA, Grade ตามลำดับ โดยformat code เลือกจากค่าของตัวแปรที่ต้องการแสดงผล
บรรทัดที่ 22 คืนค่าเป็น 0

*/