#include <stdio.h>
#include <stdlib.h>

//int i;
//int main1(){
//	// 负数输出‘>'，正数输出'<'
//	// sizeof()为unsigned 输出
//	i = -5;
//
//	if (i > sizeof(i)){
//		printf(">");
//	}
//	else{
//		printf("<");
//	}
//
//	system("pause");
//	return 0;
//}
//int main2(){
//	int i = -1;
//
//	int a;
//	char b;
//	float c;
//
//	a + b - c; //复合运算 最终的结果类型为float 混合运算以精度最高的为准
//
//	if (i > 0){
//		printf(">");
//	}
//	else{
//		printf("<");
//	}
//	// 结果‘<’
//	system("pause");
//	return 0;
//}
//
//int main3(){
//	int i = -1;
//
//	if (i > 0u){
//		printf(">");
//	}
//	else{
//		printf("<");
//	}
//	system("pause");
//	return 0;
//}
//
//int main4(){
//	int i = -5;
//	unsigned int j = 2;
//
//	if (i + j > 0){
//		printf(">");
//	}
//	else{
//		printf("<");
//	}
//	// 结果为-3，结果类型为unsigned，所以大于0 
//	// unsigned+signed取unsigned
//	system("pause");
//	return 0;
//}
//// sizeof 表达式的值为unsigned，unsigned和signed作比较两边类型取unsigned
//int main5(){
//	i--;
//	if (i > sizeof(i)){
//		printf(">");
//	}
//	else{
//		printf("<");
//	}
//	system("pause");
//	return 0;
//}
/* A说： 不是我；
   B说： 是C；
   C说： 是D；
   D说： C在胡说   已知3个人说了真话，1个人说的是假话
   */
// 先假设4个人都不是凶手，在依次假设其为凶手，是凶手则为1
// 首先假设A为凶手，四个证人说词分别判别，
// 如果三句都是对的，等于3，找到凶手，
// 如果不是凶手 还他清白，= 0；

int main7(){

	int murder[4] = { 0 };

	int i;
	for (i = 0; i < 4; i++){
		murder[i] = 1;
		if ((murder[0] != 1) +
			(murder[2] == 1) +
			(murder[3] == 1) +
			(murder[3] != 1) == 3){
			break;
		}
		murder[i] = 0;
	}
	putchar('A' + i);
	system("pause");
	return 0;
}

// 在屏幕上打印杨辉三角
// 1. 二维数组，每一个数值 = 正上 + 左上
// 2.

void Print(int n){
	int data[30][30] = { 1 };

	int i, j;
	for (i = 1; i < n; i++){
		data[i][0] = 1;// 防止出错
		for (j = 1; j <= i; j++){
			data[i][j] = data[i - j][j] + data[i - 1][j - 1];// 正上+左上
		}
	}
	// 打印 
	for (i = 0; i < n; i++){
		for (j = 0; j <= i; j++){
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}
}
int main(){

	Print(10);

	system("pause");
	return 0;

}