#include <stdio.h>
int strlen(char *str);
int main(){
	char a[200][200];
	int i,j,k,l,n;
	char tmp;
	printf("How many strings?:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("String%d:",i+1);
		scanf("%s",&a[i]);
	}

	for(k=0;k<=n-1;k++){
		l=strlen(a[k]);
		for(i=1;i<=l-1;i++){
			for(j=0;j<=l-i-1;j++){
				if (a[k][j]>a[k][j+1]){
					tmp=a[k][j+1];
					a[k][j+1]=a[k][j];
					a[k][j]=tmp;
				}
			}
		}
		for(i=0;i<=l-1;i++)
			if (a[k][i]!=a[k][i+1])
				printf("%c",a[k][i]);
		printf("\n");
	}
}
int strlen(char *str){      
	char *eos= str;        
	while (*eos ++!='\0');    
	return (eos-str-1);    
}
