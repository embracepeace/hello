#include <stdio.h>
int main()
{        //下面运用冒泡法排序。 
	int a,b,c,d,t;
	printf("请输入4个整数：");
	scanf("%d%d%d%d",&a,&b,&c,&d) ;
	if(a<b){ //交换a和b的值，使较大者往前排。 
		t=b;
		b=a;
		a=t;
	}
	 if(a<c){
		t=c;
		c=a;
		a=t;
	}
	 if(a<d){
		t=d;
		d=a;
		a=t;
	}
	 if(b<c){
		t=b;
		b=c;
		c=t;
	}
	 if(b<d){
		t=b;
		b=d;
	    d=t;
	}
	 if(c<d){
		t=c;
		c=d;
		d=t;
	}
	printf("四个数从大到小排列顺序为：%d>%d>%d>%d",a,b,c,d);
	return 0;
	
	
}
