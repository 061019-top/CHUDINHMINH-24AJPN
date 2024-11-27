#include<stdio.h>
int main(){
	int n,a=0,i;
	printf("nhap vao 1 so nguyen duong:");
	scanf("%d",&n);
	if(n<=0){
		printf("so nhap vao khong phai la so nguyen duong");
	}else{	
	for(i=1;i<=n;i++){
	a+=i;
	}
	printf("tong cac so tu 1 den %d la %d \n",n,a);
    }
	return 0;
}
		
