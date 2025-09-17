#include <stdio.h>
int main(){
  int n;
scanf("%d",&n);
int num=1;
for(int i=1;i<=n;i++){
int start = num;
int end=num+i-1;
if(i%2==1){
for(int j=start;j<=end;j++){
printf("%d",j);
if(j!=end)printf("*");
}
}else{
for(int j=end;j>=start;j--){
printf("%d",j);
if(j!=start)printf("*");
}
}
printf)=("\n");
num=end+1;
}
return 0;
}
