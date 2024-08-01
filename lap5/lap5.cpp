#include <stdio.h>
int main() {
    int Score ;
    char text  ;
    printf("ผู้ใช้กรอกค่าคะแนนดิบเข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชาProgramming\n") ;
    if(scanf("%d%c" , &Score , &text   ) != 2 || text  != '\n' ){
        printf("please enter number only") ;
    }else if(Score >=0 && Score <=49 ) {
        printf("f") ;
    }else if(Score >= 50 && Score <= 54 ) {
        printf("d") ;
    }else if(Score >= 55 && Score <= 59 ) {
        printf("d+") ;
    }else if(Score >= 60 && Score <= 64 ) {
        printf("c") ;
    }else if(Score >= 65 && Score <= 69 ) {
        printf("c+") ;
    }else if(Score >= 70 && Score <= 74 ) {
        printf("b") ;
    }else if(Score >= 75 && Score <= 79 ) {
        printf("b+") ;
    }else if(Score >= 80 && Score <= 100 ) {
        printf("a") ;
    }else if(Score <=-1 || Score >= 101) {
        printf("please enter number only") ;
    }//end if
    return 0 ;
}//end main function