#include <stdio.h>
#define M 10 
int main(){
	int num[M];
	int i,j,t;
	for(i = 0; i < M ; i++){
		scanf("%d", &num[i]);  //��ֵ����scanf()�����б���ʹ��&���ţ����ַ������в���ʹ��&���š� 
	}
	//for (i = 0; i < M; i++){
	//	printf("%d ", num[i]);
	//}
	for (i = 0; i < M-1; i++){
		for (j = i+1; j <M; j++){
			if (num[i] >= num[j]){  //��ѭ��for()���ã��Ƚ�a[i]��a[i]����ĸ�������ѡ����С�ߣ��������ŵ�a[i]λ���ϡ� 
				t = num[i];
				num[i] = num[j];
				num[j] = t;
			}
		}
	}
	for (i = 0; i < M; i++){
		printf("%d ", num[i]);
	}
	return 0;
}

