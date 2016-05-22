#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
//定义字符串之前使用的字符数组是一种方式，也可以把字符串定义成字符指针；
	char * str = "Hello";
	char * str1 = "Woeld";
	char * str2 = "ban";

//我们要把字符串添加到哪个地方去，首先我们定义一个字符数组；
	const int DIST_LEN = 100;
	char dist[DIST_LEN];
	memset(dist,0,DIST_LEN);
	
//如何将两个字符串连接到一起输出例；
	strcat(dist,str);
	strcat(dist," ");
//	strcat(dist,str1);
//如何只连接一个字符串的某一部分,我们可以用这种方法连接指明特定的长度连接进来；
	strncat(dist,str1,3);
	strcat(dist," ");
	strcat(dist,str2);

//如何只连接一个字符串的某一部分,我们可以用这种方法连接指明特定的长度连接进来；
	strncat(dist,str,3);
	puts(dist);




	return EXIT_SUCCESS;
}
