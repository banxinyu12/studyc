#include <stdint.h>
#include <stdio.h>
int main() {

//	int a = 8;//修改a的值大于b则结果输出为(Max nuw  is a,x)
//	int b = 10;
//
//	if (a>b){
//		printf("Max nuw is a,%d\n",a);
//	} else{
//		printf("Max nuw is b,%d\n",b) ;
//	}	
//	
//
//	return 0;//输出结果为Max nuw is b,10
//}
//下面是评分程序
	int score = 70;//score是得分/	
	if (score>80){//如果说得分过80分
	   printf("Fine\n");//则输出为Fine
	}else if(score>=60){//如果得分为大于等于60分输出则为
         printf("OK\n");
	} else{
	   printf("Fail\n");
	}

	return 0;
}
	






