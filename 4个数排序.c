#include <stdio.h>
int main()
{        //��������ð�ݷ����� 
	int a,b,c,d,t;
	printf("������4��������");
	scanf("%d%d%d%d",&a,&b,&c,&d) ;
	if(a<b){ //����a��b��ֵ��ʹ�ϴ�����ǰ�š� 
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
	printf("�ĸ����Ӵ�С����˳��Ϊ��%d>%d>%d>%d",a,b,c,d);
	return 0;
	
	
}
