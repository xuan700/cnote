#include<stdio.h>
int main(){
	char s1[80],s2[80];
	int i,j;
	printf("请依次输入两串字符：");
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';){
		s1[i++]=s2[j++];
	}
	s1[i]='\0';
	printf("%s",s1);	
	
	
	
	return 0;
}