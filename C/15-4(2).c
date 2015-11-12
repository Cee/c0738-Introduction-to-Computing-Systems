#include <stdio.h>
void solve(double,double);
int main(){
	double a,b;
	scanf("%lf %lf",&a,&b);
	solve(a,b);
}
void solve(double a,double b){
	if (b==0)
		printf("All real numbers are solution for ax+b=0");
	else{
		if (a==0)
			printf("No solution for ax+b=0");
		else
			printf("The solution for ax+b=0 is x=%f",(-b / a));
	}
}