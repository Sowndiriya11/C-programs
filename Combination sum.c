#include <stdio.h>
#include <stdlib.h>
int* current;
int currentSize;
int** results;
int * returnColumnSizes;
int resultsSize;
void backtrack(int*candidates,int candidatesSize,int target,int start){
if(target==0){
int*temp=(int*)malloc(currentSize*sizeof(int));
for(int i=0;i<currentSize;i++)
  temp[i]=current[i];
results[resultsSize]=temp;
returnColumnSizes[resultsSize]=currentSize;
resultsSize++;
return;
}
if(target<0) return;
for(int i=start;i<candidatesSize;i++){
current[currentSize++]=candidates[i];
backtrack(candidates,candidatesSize,target-candidates[i],i);
  }
}
int ** combinationSum(int*candidates,int candidatesSize,int target,int*returnSize,int**returnColumnSizesOut){
  results=(int**)malloc(1000*sizeof(int*));
returnColumnSizes=(int*)malloc(1000*sizeof(int));
current=(int*)malloc(1000*sizeof(int));
currentSize=0;
resultsSize=0;
backtrack(candidates,candidatesSize,target,0);
*returnSize=resultsSize;
*returnColumnSizesOut=returnColumnSizes;
return results;
}
int main(){
  int candidates[]={2,3,6,7};
int candidatesSize=sizeof(candidates)/sizeof(candidates[0]);
int target=7;
int returnSize;
int*returnColumnSizes;
int** ans=combinationSum(candidates,candidatesSize,target,&returnSize,&returnColumnSizes);
printf("Combinations:\n");
for(int i=0;i<returnSize;i++){
printf("[ ");
for(int j=0;j<returnColumnSizes[i];j++){
printf("&d",ans[i][j]);
}
printf("]\n");
}
return 0;
}
