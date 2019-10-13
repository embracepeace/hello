#include <stdio.h>
#define M 10 
int main(){
	int num[M];
	int i,j,t;
	for(i = 0; i < M ; i++){
		scanf("%d", &num[i]);  //数值数组scanf()函数中必须使用&符号，而字符数组中不能使用&符号。 
	}
	//for (i = 0; i < M; i++){
	//	printf("%d ", num[i]);
	//}
	for (i = 0; i < M-1; i++){
		for (j = i+1; j <M; j++){
			if (num[i] >= num[j]){  //内循环for()作用：比较a[i]和a[i]后面的各数，挑选出较小者，并把它放到a[i]位置上。 
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

