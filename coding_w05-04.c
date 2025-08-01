#include<stdio.h>

int main(){

    struct data
    {
        char name;
        int age;
        float height;
        float weight;
        char Grade;
    };

    struct data person[3];

    printf("Enter your first name character, age, height(in c.m.), weight(kg.), Grade (e.g. C 18 150.5 48.0 A) : \n");

    for (int i = 0; i < 3; i++){
        printf("person %d :", i+1);
        scanf("%s %d %f %f %c", &person[i].name, &person[i].age, &person[i].height, &person[i].weight, &person[i].Grade);
    }

    printf("\n+------+-----+------------+------------+------------+\n");
    printf("|%6s|%5s|%12s|%12s|%12s|\n", " Name ", " Age ", " Height(cm) ", " Weight(kg) ", " Grade Code ");
    printf("+------+-----+------------+------------+------------+\n");

    for (int i = 0; i < 3; i++) {
        printf("| %-4c | %3d | %10.1f | %10.1f | %10c |\n",
                person[i].name,
                person[i].age,
                person[i].height,
                person[i].weight,
                person[i].Grade);
    }

    printf("+------+-----+------------+------------+------------+\n");

    return 0;
}

/*
บรรทัดที่ 1 ประกาศเรียกใช้ stdio.h
บรรทัดที่ 3 กำหนดฟังก์ชัน main
บรรทัดที่ 5 ใช้คำสั่ง struct data กำหนดโครงสร้างข้อมูลของ data
บรรทัดที่ 7 ประกาศตัวแปร char ชื่อ name ในโครงสร้างข้อมูล data เลือกใช้ char เพราะต้องการเก็บตัวอักษรตัวแรกของชื่อ
บรรทัดที่ 8 ประกาศตัวแปร int ชื่อ age ในโครงสร้างข้อมูล data เลือกใช้ int เพราะต้องการเก็บค่าอายุเป็นเลขจำนวนเต็ม
บรรทัดที่ 9 ประกาศตัวแปร float ชื่อ height ในโครงสร้างข้อมูล data เลือกใช้ float เพราะต้องการเก็บค่าส่วนสูงซึ่งเป็นทศนิยม
บรรทัดที่ 10 ประกาศตัวแปร float ชื่อ weight ในโครงสร้างข้อมูล data เลือกใช้ float เพราะต้องการเก็บน้ำหนักซึ่งเป็นทศนิยม
บรรทัดที่ 11 ประกาศตัวแปร char ชื่อ Grade ในโครงสร้างข้อมูล data เลือกใช้ char เพราะต้องการเก็บตัวอักษรตัวเดียวแทนเกรด
บรรทัดที่ 14 ประกาศกำหนดขนาดโครงสร้างข้อมูล data ชื่อ person โดยกำหนดขนาดไว้ 3 เพื่อเก็บข้อมูล 3 คน
บรรทัดที่ 16 ใช้คำสั่ง printf แสดงผลเรียกเก็บค่าข้อมูล
บรรทัดที่ 18 ใช้ for สร้างเงื่อนไข โดยกำหนดให้ i=0 เงื่อนไขคือ i < 3 และ i มีค่าเพิ่มขึ้น
บรรทัดที่ 19 ใช้คำสั่ง printf แสดงผล person %d : ใช้ format code %d เพราะลำดับที่คนเป็นจำนวนเต็ม โดยเรียกค่ามาจากตัวแปร i ที่ +1
บรรทัดที่ 20 ใข้คำสั่ง scanf เพื่อเก็บค่าข้อมูล ใช้ format code %s %d %f %f %c 
            เพื่อเก็บค่าข้อมูลตัวแปร &person[i].name, &person[i].age, &person[i].height, &person[i].weight, &person[i].Grade 
            ตามลำดับ โดย[i] เป็นตัวช่วยเก็บข้อมูลแต่ละตัวแปรตามลำดับ person
บรรทัดที่ 23 ใช้คำสั่ง printf เพื่อแสดงผล +------+-----+------------+------------+------------+ และ \n เพื่อให้ขึ้นบรรทัดใหม่
บรรทัดที่ 24 ใช้คำสั่ง printf เพื่อแสดงผล |%6s(กำหนดขนาด 6 ช่อง + คือชิดขวา s คือ string)
            |%5s(กำหนดขนาด 5 ช่อง + คือชิดขวา s คือ string)|
            %12s(กำหนดขนาด 12 ช่อง + คือชิดขวา s คือ string)|
            %12s(กำหนดขนาด 12 ช่อง + คือชิดขวา s คือ string)|
            %12s(กำหนดขนาด 12 ช่อง + คือชิดขวา s คือ string)|
             \n เพื่อขึ้นบรรทัดใหม่
บรรทัดที่ 25 ใช้คำสั่ง printf เพื่อแสดงผล +------+-----+------------+------------+------------+ และ \n เพื่อให้ขึ้นบรรทัดใหม่
บรรทัดที่ 27 ใช้ for สร้างเงื่อนไข โดยกำหนดให้ i=0 เงื่อนไขคือ i < 3 และ i มีค่าเพิ่มขึ้น
บรรทัดที่ 28 ใช้คำสั่ง printf เพื่อแสดงผล | %-4c(กำหนดขนาด 4 ช่อง - คือชิดซ้าย c คือ char) |
             %3d(กำหนดขนาด 3 ช่อง + คือชิดขวา d คือ จำนวนเต็ม) |
             %10.1f(กำหนดขนาด 10 ช่อง + คือชิดขวา .1f คือ ทศนิยม 1 ตำแหน่ง) |
             %10.1f(กำหนดขนาด 10 ช่อง + คือชิดขวา .1f คือ ทศนิยม 1 ตำแหน่ง) |
             %10c(กำหนดขนาด 10 ช่อง + คือชิดขวา c คือ char) |
             \n เพื่อขึ้นบรรทัดใหม่
บรรทัดที่ 29 โดยเรียกข้อมูลจาก person[i].name ตามลำดับค่า i
บรรทัดที่ 30 โดยเรียกข้อมูลจาก person[i].age ตามลำดับค่า i
บรรทัดที่ 31 โดยเรียกข้อมูลจาก person[i].height ตามลำดับค่า i
บรรทัดที่ 32 โดยเรียกข้อมูลจาก person[i].weight ตามลำดับค่า i
บรรทัดที่ 33 โดยเรียกข้อมูลจาก person[i].Grade ตามลำดับค่า i
บรรทัดที่ 36 ใช้คำสั่ง printf เพื่อแสดงผล +------+-----+------------+------------+------------+ และ \n เพื่อให้ขึ้นบรรทัดใหม่
บรรทัดที่ 38 คืนค่าเป็น 0

*/