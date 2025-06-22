//ประเภท 2 คือ Function มี parameter และไม่มี return value  (Have parameter and no return value)
//Parameter เป็นตัวแปลประเภทหนึ่ง จะเก็บ/รับข้อมูลที่ส่งมาจากการเรียกใช้ฟังฟ์ชั่น

#include <stdio.h>

void showLine();

void funcSau(int a, int b, double c){
    double sum = a + b + c;
    printf("sum of a b c is : %.2lf\n", sum);
}

void WowWowWow(char name [50], int age){
    printf("Your name is : %s\n", name);
    printf("Your age is : %s\n", name);
}

void main(){
    showLine();
    funcSau(10, 20, 10.25);//เวลา call function ที่มี parameter ต้องส่ง argumen ให้ parameter ด้วย
    showLine();
    WowWowWow("Sombat",27);
    WowWowWow("Somjai",27);
    showLine();
}

void showLine(){
    printf("-----------------------------\n");
}