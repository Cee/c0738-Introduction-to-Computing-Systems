#include <stdio.h>
int save[32];
int count=0;
void solve(int);
int main(){
	int n;
	printf("Input n:");
	scanf("%d",&n);
	if (n==0) 
		printf("0000 0000 0000 0000 0000 0000 0000 0000");
	else{
		int i;
		if (n<0){
			n=-n;
			solve(n);
			for(i=0;i<=31;i++)
				if (save[i]==0)
					save[i]=1;
				else
					save[i]=0;
			save[31]++;
			i=31;
			while(save[i] ==2){
				save[i]=0;
				i--;
				save[i]++;
			}
		}
		else
			solve(n);
		for(i=0;i<=31;i++){
			printf("%d",save[i]);
			if (i % 4==3) 
				printf(" ");
		}
	}
}
void solve(int x){
	if (x != 0){
		count++;
		solve(x/2);
	}
	save[31-count]=x % 2;
	count--;	
}