//y(n+1)=(y(n)+x/(y(n))/2
#include <stdio.h>
double cal(double,double);
int main(){
	double x,ans;
	ans=1.0;
	scanf("%lf",&x);
	int i;
		for(i=1;i<=100;i++)
			ans=cal(x,ans);
	printf("The answer y=x^(1/2) is that answer=%lf",ans);
}
double cal(double a, double b){
	return ((b+(a/b))/2.0);
}