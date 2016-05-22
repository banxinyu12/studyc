#include <stdio.h>
#include <stdlib.h>

int main(void) {
printf("\n---------------------字符串与基础数据类型的转换------------------\n");
//将字符串转换成int类型的值;
	char * str = "100";
	int a;
	sscanf(str,"%d",&a);
	printf("Int value is %d\n",a);
//以上方式也适用其他类型例;
	char * ban = "256";
	float b;
	sscanf(ban,"%f",&b);
	printf("Int value  %.2f\n",b);
printf("\n-----------------ato函数的字符串转其他类型-----------------------\n");
//库函数给我们提供了比较好用的函数也比较简单;
//atof是把字符串转浮点类型的值,atoi是转int类型的值,atol是转long类型的值;
	double value = atof("3.14");
	printf("%f\n",value);

	float xiaoban = atof("4.678");
	printf("%.4f\n",xiaoban);
	
	int shijie = atoi("232");
	printf("%d\n",shijie);
printf("\n--------------------把其它类型的值转成字符串---------------------\n");
//其他类型的值转成字符串;
	int zuoye = 1000;
	char buf[10];
	sprintf(buf,"%d",zuoye);
	puts(buf);

	double shenme = 5.164;
	char xin[5];
	sprintf(xin,"%.4f",shenme);
	puts(xin);	
	



	return EXIT_SUCCESS;
}
