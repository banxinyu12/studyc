#include <stdio.h>
#include <stdlib.h>
//在定义之后我们使用一个方法叫获取字符串长度的方法，
#include <string.h>
int main(void) {
//以下面方式定义；
//	char str[10];

//初始化的方法一；
//	char str[10]="Hello";

//初始化的方法二,初始化数组的方式；
//在Ｃ语言每个字符串的结尾都有一个\0来结尾,如果不写程序可能会无法查找到一个字符串的结尾，这是一个风险；
//	char str[10]={'H','e','\n','l','l','o','\n'};

//快速的将字符串清零；
//	memset(str,0,10);
//	printf("string length : %ld,and string is %s\n",strlen(str),str);


//使用常规的数组元素的访问方式，来访问字符数组里面的元素

	char str[] = "Hello World";
	
	int i;
	for(i=0;i<11;i++){
	   printf("[intdex:%d]%c\n",i,str[i]);
	}

	return EXIT_SUCCESS;
}
