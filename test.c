#include <stdio.h>
#include <stdlib.h>

//int i;
//int main1(){
//	// ���������>'���������'<'
//	// sizeof()Ϊunsigned ���
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
//	a + b - c; //�������� ���յĽ������Ϊfloat ��������Ծ�����ߵ�Ϊ׼
//
//	if (i > 0){
//		printf(">");
//	}
//	else{
//		printf("<");
//	}
//	// �����<��
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
//	// ���Ϊ-3���������Ϊunsigned�����Դ���0 
//	// unsigned+signedȡunsigned
//	system("pause");
//	return 0;
//}
//// sizeof ���ʽ��ֵΪunsigned��unsigned��signed���Ƚ���������ȡunsigned
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
/* A˵�� �����ң�
   B˵�� ��C��
   C˵�� ��D��
   D˵�� C�ں�˵   ��֪3����˵���滰��1����˵���Ǽٻ�
   */
// �ȼ���4���˶��������֣������μ�����Ϊ���֣���������Ϊ1
// ���ȼ���AΪ���֣��ĸ�֤��˵�ʷֱ��б�
// ������䶼�ǶԵģ�����3���ҵ����֣�
// ����������� ������ף�= 0��

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

// ����Ļ�ϴ�ӡ�������
// 1. ��ά���飬ÿһ����ֵ = ���� + ����
// 2.

void Print(int n){
	int data[30][30] = { 1 };

	int i, j;
	for (i = 1; i < n; i++){
		data[i][0] = 1;// ��ֹ����
		for (j = 1; j <= i; j++){
			data[i][j] = data[i - j][j] + data[i - 1][j - 1];// ����+����
		}
	}
	// ��ӡ 
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