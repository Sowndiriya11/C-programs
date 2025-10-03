#include <stdio.h>
int main(){
  int year;
scanf("%d",&year);
if((year%400==0)||(year%4==0&&year%100!=0)){
printf("Leap\n");
}else{
printf("Non_Leap\n");
}
return 0;
}
