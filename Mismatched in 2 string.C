#include<stdio.h>
#include<string.h>
int main(){
char str1[100],str2[100];
scanf("%s",str1);
scanf("%s",str2);
int n1=strlen(str1),n2=strlen(str2);
for(int i=0;i<n1 && i<n2;i++){
if(str1[i]!=str2[i]){
printf("%c,%c ", str1[i],str2[i]);
}
}
return 0;
}
