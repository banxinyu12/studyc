#include<stdio.h>

/**
 *知识点一.流程控制语句
 *知识点二.循环语句
 */

#define OK 0

int main(){
    
    //1.演示if else if else判断语句块
    int number = 60;
    
    if(number >= 80){
        printf("成绩优异!\n");
    }else if(number >= 60){
        printf("成绩一般!\n");
    }else{
        printf("成绩差!\n");
    }
  
    //2.演示goto语句
    
    if (number<60) {
        goto ng;
    }else{
        goto pass;
    }
    
    ng:printf("成绩不理想重新复习一次!\n");
    pass:printf("成绩理想\n");
    
    //3.演示switch
    int day = 1;//修改dir = 的值就会执行不一样的命令
    
    switch (day){
        case 1:
            printf("星期一\n");
            break;//break的作用是跳出当前的判断
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n ");
            break;
        case 5:
            printf("星期五\n ");
            break;
        case 6:
            printf("星期六\n ");
            break;
        case 7:
            printf("星期日\n ");
            break;
        default://default的作用是当已知的值都不为以上输出的值就执行default输出专		为未知输出准备的
            printf("默认输出\n");
    }
    //4.演示while循环结构
    int num = 0;
    while(num < 3){
        printf("num小于三 num+1\n");
        num = num+1;
    }
    printf("num >= 3!\n");
    
    //5.演示do while循环结构
    num = 100;
    do{
        printf("不管while条件成立还是不成立先做一次再说\n");
    }while (num<3);
    
    //6.打印九九乘法表
    int i;
    int j;
    
    for (i = 1; i <= 9; i++) { //控制趟数一共是九趟
        printf("第一趟:");
        for (j = 1; j<= i; j++) { //控制每趟要输出几列
            printf("%d*%d=%d\t",j,i,i*j); //*是乘号 \t是tab键是对其的意思
        }
        printf("\n");
    }
    return OK;
}