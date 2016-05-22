#include <stdio.h>
#include<string.h>

int main(){ 

   //1.格式化输入和输出
   //scanf()：和 printf() 类似，scanf() 可以输入多种类型的数据。
   int i = 0;
   scanf("%d",&i);
  
  //2.输入输出字符串
  // char a1[5];   
  // gets(a1); //输入字符 给a1  
  // puts(a1); //输出字符
 char c;
  c = getchar(); 
  printf("你输入的单个字符:%c\n",c); 
return 0;

}
