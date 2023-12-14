#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int n,j,y,x,temp,sum=0,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=y=n;
	while(y!=0){
		j=y%10;
		count++;
		y=y/10;
	}
	while(n!=0){
		x=n%10;
		sum=sum+pow(n,count);
		n=n/10;
	}
	if (temp==sum){
		printf("%d is an Amstrong value",temp);
	}
	else{
		printf("%d is not an Amstrong value",temp);
	}
}
