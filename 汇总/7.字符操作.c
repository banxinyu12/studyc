//包含标准输入输出函数库
#include <stdio.h>

//包含字符串操作函数
#include <string.h>

int main(){

	//////////////////////////////字符串连接函数/////////////////////////////////////////
	char *a = "a";	
	char *b = "bbc";	
	char chars [4];
	//strcat() 函数用来连接字符串，其原型为: char *strcat(char *dest, const char *src); 【参数】dest 为目的字符串指针，src 为源字符串指针。
	strcat(chars,a);//strcat 连接字符串到chars中
	printf("第一次连接: %s \n",chars);
	strncat(chars,b,2);//strncat 连接字符串中的一部分到chars中
	printf("第二次连接: %s \n",chars);

	//////////////////////////////字符串格式输出///////////////////////////////////////////
	char c = '1'; 
	int i = 1; 
	double d = 1.1; 
	char *cs = "123";
	printf("%c  %d  %f  %s ",c,i,d,cs);

	//////////////////////////////字符串截取函数/////////////////////////////////////////
	char *string = "helloword!";

        //strchr(原字符串,指定字符) 从指定字符开始截取到末尾
	char *str1 = strchr(string,'e');

        //strrchr(原字符串,指定字符) 从指定字符处开始向前截取
	char *str2 = strrchr(string,'r');

        //strstr(原字符串,指定字符串) 从指定字符串处开始截取到末尾
	char *str3 = strstr(string ,"llo");

	char str4[10];
        //strncpy(接收字符串,原字符串,截取长度)
	strncpy(str4,string,5);
	
	//需要明白数组在内存中的存储方式 +5表示从第五位开始
	char *str5 = string+5;
		
	//从字符串的特定位置开始截取 ,比如想截取 string 中的 owo
	char *str6 = string+4;
        char str7[4];
        strncpy(str7,str6,3);

	//字符输出函数
	puts(str5);
	return 0;
}
