#include <stdint.h>
#include "stdio.h"

//游戏前后左右的值( UP DOWN LEFT RIGHT)
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

int main() {
	int dir = UP;//修改dir = 的值就会执行不一样的命令
	
	switch (dir){
	case UP:
		printf("Go up\n");
		break;//break的作用是跳出当前的判断
	case DOWN:
		printf("Go Down\n");
		break;
	case LEFT:
		printf("Go Left\n");
		break;
	case RIGHT:
		printf("Go Right\n ");
		break;
	default://default的作用是当已知的值都不为以上输出的值就执行default输出专		为未知输出准备的
		printf("Dir unknow\n");
}

	return 0;
}
