#include <stdio.h>
#include <stdlib.h>
//获取可变参数要引入头文件stdarg.h;
#include <stdarg.h>

//sum 求和,(int n)表示有多少个参数,...代表参数可变;
int sum(int n,...){
//声明值all;
	int all = 0;
//获取参数列表;
	va_list args;
	va_start(args,n);
//通过for循环获取里面的每一个值;
	int i;
	for(i=0;i<n;i++){
		all+=va_arg(args,int);
	}
//用va_end(args)来结束可变参数的获取;
	va_end(args);
//最后用return来返回值
	return all;
}

int main(void) {

	printf("sum is %d\n",sum(5,1,2,3,1,1));

	return EXIT_SUCCESS;
}
