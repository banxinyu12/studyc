/**
 知识点1. 整形 实型 和字符型 这三个要掌握
 1.整形 (整数类型 又分为正整数和负整数）//int(整形 表示范围小) long(长整形 表示范围大)
 2.实型 (小数 也有正负) //float（单精度 表示范围小） double（双精度 表示范围大）
 3.字符型（字符 单个文字）
	用''表示  如 char c = '我';
	如果是很多字符的话就叫做字符串 如: char * ch = "我你他";,注意字符串用 char *声明 字符用 char声明
 
 知识点2.其中这三种类型 按照内存中的保存形式来说可以分为 常亮和变量
	1.常量一旦定义就无法修改
 
 const int i = 1；    //整形常量
 const float i1 = 2.1;   //浮点型常量
 const char * ch = "我是常量,修改我会出错";
 
	2。变量在内存中是可以修改的
 int i = 1; //定义整形变量i ,其值为1
 i = 2; //修改内存中整形变量i的值为2
 
 
 练习题1.声明变量
	声明整形，长整形,实型(单精度)，实型(双精度),字符型,字符串,并打印输出；然后分别修改这5个变量的值。
 
 练习题2.声明常量
	用两种方式定义常量 ：整形，长整形,实型(单精度)，实型(双精度),字符型,字符串 并打印输出。
 **/

#include<stdio.h>

/**---------------------------- 定义一组变量 ---------------------------------**/
//define是宏定义的意思
#define PI 3.1415926535898

const int NUM1 = 56;
const long NUM2 = 1000000;
const float NUM3 = 12.3;
const double NUM4 = 123444.22;
const char * NAME = "xiaoming";
const char C = 'a';


int main(){
    
    
    printf("\n---------------------------- 定义一组变量 ---------------------------------\n");
    int num_1 = 0;     //(整形)其值表示的范围小
    long num_2 = 0;    //(长整形)其值表示的范围大
    float num_3 = 0;   //(单精度浮点型)其值表示的范围小
    double num_4 = 0;  //(双精度浮点型)其值表示的范围大
    char * name = "0"; //(字符串)一串字符,变量写法是 char *,其值用双引号包住
    char c = '0';      //(字符)一个字符,变量写法是 char  ,其值用单引号包住
    
    printf("1.定义一个整形变量,变量的名字是num_1,变量的值是: %d \n",num_1); //输出时使用占位符 %d
    printf("2.定义一个长整形变量,变量的名字是num_2,变量的值是: %ld \n",num_2);//输出时使用占位符 %ld
    printf("3.定义一个单精度浮点变量,变量的名字是num_3,变量的值是: %f \n",num_3);//输出时使用占位符 %f
    printf("4.定义一个双精度浮点变量,变量的名字是num_4,变量的值是: %f \n",num_4);//输出时使用占位符 %f
    printf("5.定义一个字符串变量,变量的名字是name,变量的值是: %s \n",name);//输出时使用占位符 %s
    printf("6.定义一个字符变量,变量的名字是c,变量的值是: %c \n",c);//输出时使用占位符 %c
    
    
    printf("\n-------------------------- 开始修改变量的值 ---------------------------------\n");
    num_1 = 10;
    num_2 = 100000000;
    num_3 = 1.4;
    num_4 = 102000000.45;
    name = "小强";
    c = 'A';
    
    printf("\n----------------------------开始使用变量-----------------------------------\n");
    //学了这么长时间的基本类型了 应该知道在什么时候用什么类型
    printf("1.小明的年龄是: %d 岁\n",num_1); //输出时使用占位符 %d
    printf("2.这个恐龙化石大概有: %ld 年的历史 \n",num_2);//输出时使用占位符 %ld
    printf("3.白菜的价格是: %f 元/斤 \n",num_3);//输出时使用占位符 %f
    printf("4.这个古玩价值: %f 元\n",num_4);//输出时使用占位符 %f
    printf("5.他的名字是: %s ！\n",name);//输出时使用占位符 %s
    printf("6.26个英语字母中的第一个是: %c \n",c);//输出时使用占位符 %c
    
    
    
    
    printf("\n---------------------------开始使用常量---------------------------------\n");
    printf("1.老王的年龄是: %d 岁\n",NUM1); //输出时使用占位符 %d
    printf("2.这个化石大概有: %ld 年的历史了!\n",NUM2);//输出时使用占位符 %ld
    printf("3.这些菜的价格是: %f 元/斤 \n",NUM3);//输出时使用占位符 %f
    printf("4.这个青花瓷的价值: %f 元\n",NUM4);//输出时使用占位符 %f
    printf("5.我们英文老师的名字是: %s ！\n",NAME);//输出时使用占位符 %s
    printf("6.26个英语字母中的第一个(小写)是: %c \n",C);//输出时使用占位符 %c
    
    printf("\n-----------------------使用 '宏定义' 定义的常量------------------------\n");
    //#define 是宏定义语法 ,我们在代码中的PI 将会被编译器(gcc)替换成他的值 3.14159265
    //即 gcc 编译源代码的时候会把 printf("圆周率是: %f",PI); 修改为 printf("圆周率是: %f",3.14159265);
    //也就是说 PI 会被替换为 3.14159265
    printf("圆周率是: ( %f ) \n",PI);
    return 0;
}
