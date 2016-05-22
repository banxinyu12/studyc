#include <stdio.h>
#include <stdlib.h>

int main(void) {

//while循环的使用方式;
//	int i = 0;
//	while (i < 100) {
//只输出所有的奇数,下面的if其实是筛选i为100以下的数除以2 余数为1的数;
//因为c语言是弱类型编程语言,可以把==1去掉,例:if (i % 2 == 1)去掉后为if (i % d)
//		if (i % 2) {
//		printf("%d\n", i);
//	     }
//		i++;
//
//	}



//do-while循环的使用方法:
//	int i = 0;
//先用do做执行然后去判断;
//	do{
//	     printf("%d\n",i);
//	     i++;
//	}while(i<100);



//do-while和while的区别是;do-while不管条件是否满足,这个程序都会执行然后跳出:while是首先判断这个条件是否满足,如果不满足就不会执行例; 
	int i = 0;
	    while(i<0){
		printf("while:%d\n",i);
}

    	    do{
		printf("do-while:%d\n",i);
		i++;
	       }while(i<0);

	return EXIT_SUCCESS;
}
