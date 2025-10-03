#include<stdio.h>
#include<string.h>
int main(){
  char str1[1000],str2[1000];
scanf("%s %s",str1,str2);
  char*pos=strstr(str1,str2);
  if(pos!=NULL){
  printf("%ld\n",pos-str1);
} else{
printf("-1\n");
}
return 0;
}
