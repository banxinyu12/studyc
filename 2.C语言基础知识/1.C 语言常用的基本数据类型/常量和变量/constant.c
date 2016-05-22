#include <stdio.h>//标准输入输出
#define MY_AGE 10000//第一种定义常量的方式，编译的时候会把所以出现MY_AGE的地方替换成10000
const int MY_AGE1 = 2000;
int main(){
	printf("MY_AGE的值：%d\nMY_AGE1的值：%d\n",MY_AGE,MY_AGE1);
	return 0;
}

