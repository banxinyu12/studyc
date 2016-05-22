#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//!的运算符首先定义两个宏;
#define MALE 1
#define FEMALE 2

int main() {

//这是我们所使用的三个逻辑运算符  &&  ||  !
//	int score = 80;


//逻辑&的运算符;
//如果说score大于等于60并且小于等于100;
//	if (score>=60&&
//		score<=100) {
//及格输出;
//	     printf("OK\n");
//	}else{
//不及格或者说无效的分数输出;
//	     printf("Fail or invalid score\n");
//	}


//逻辑 || 的运算符;
//如果说score小于60或者大于100;
//	if (score<60||
//		score>100) {
//满足以上条件则输出为;
//	    printf("Fail or invalid score\n");
//	}else{
//不满足以上条件则输出为;
//	    printf("OK\n");
//	}


//逻辑!的运算符;
	int sex = MALE;
//(sex==MALE)两个等号是测试等于,说sex等于MALE;
//(sex!=MALE)!=是测试不等于,说sex不等于MALE;
	if (sex!=MALE) {
	    printf("The person is female\n");
	}else{
	    printf("The person is male\n");
	}

	return EXIT_SUCCESS;
}
