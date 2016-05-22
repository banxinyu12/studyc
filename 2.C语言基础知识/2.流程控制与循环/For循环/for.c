#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	for(int i=0;i<100;i++)错误，这是因为在gcc中直接在for循环中初始化了增量：这语法在gcc中是错误的

//必须先先定义i变量如下;

//步骤一,循环初始化的值等于i=0,循环所满足的条件是i<100,之后是每执行一次for循环会执行一个i自加1;
//	int i;
//	for(i=0;i<100;i++){
//	printf("Number : %d\n",i);
//步骤三,循环嵌套也就是循环里面继续写循环如下;
//	int j;
//	for(j=0;j<10;j++){
//	printf("%d,",j);
//	}
//	printf("\n");
//步骤二,如果说满足其他条件不想让循环继续就用判断语句以break结束;
//	if(i>50){
//	break;
//   }	
// }





//break关键字和continue的区别;
	int i;
        for(i=0;i<100;i++){
		printf("Item %d\n",i);
//在此处写一个判断语句,加入break后它会跳出当前的循环;
//加入continue后它会跳出for循环的当前的本次的循环;
	if(i==50){
	   continue;
	}
		printf("Number %d\n",i);
}




//总结以上经验可以写出一些比较有创意的程序;
//输出乘法表;
//	int i;
//	for(i=1;i<=9;i++){
//如果不想输出重复的乘法口诀例如1*2=2和2*1=2则需要修该j<=i就行了;
//	int j;
//	for(j=1;j<=i;j++){
//如果想让表格更为规整则需要用制表符t,可以把最后一个%d后面的空格去掉了;
//		printf("%d*%d=%d\t",i,j,i*j);
//如果说j大于5的话就让这个程序跳出,break和当前的for j 相对应;
//	if(j>5){
//		break;
//		}
//跳出所有的for循环,使用goto语句;
//	if(i*j>=24){
//	   goto end;
//	  }
//	}
//	printf("\n");
//   }
//在for循环的末尾写一个标签;
//	end:
	return EXIT_SUCCESS;
}
