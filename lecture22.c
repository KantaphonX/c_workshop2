//ประเภทของ Function มี 4 ประเภท
//ประเภท 1 คือ Function ที่ไม่มี parameter และไม่มี return value  (No parameter and no return value)

#include <stdio.h>

void showHello(){ //ไม่มี parameter คือ ไม่มีอะไรในวงเล็บหลังชื่อฟังก์ชั่น
    printf("Hello\n");
    //ไม่มีคำสั่งreturn ในตัว Function และ return type 9hv'gxHo void
}

void showHi(){ 
    printf("Hi\n");
    showHello();
}
    

void main(){
    showHello();
    showHello();
    showHi();
}


void showHey(){ 
    printf("Hey\n");
}
    