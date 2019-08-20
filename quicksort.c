/*
* Author: wang.yangbj@inspur.com
* Date: 2019-08-20
* Desc: quick sort algorithms demo
*/

#include <stdio.h>
#include <stdlib.h>

void QuickSort(int data,int left,int right)
{
  if (left > right) {
    return;
  }
  
  int temp = 0;
  int i = left;
  int j = right;
  int key = data[left];
  
  while (i != j) {
    while (i < j && a[j] >= key) {
      j--;
    }
    
    while (i < j && a[i] >= key) {
      i++;
    }
    
    if (i < j) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
    
    a[left] = a[i];
    a[i] = key;
    
    QuickSort(data,left,i-1);
    QuickSort(data,i+1,right);
  }
}

int main(int argc,char**argv)
{
  int a[100] = {0};
  int i = 0,n = 0;
  
  scanf("%d",&n);
  
  for (;i < n;i++) {
    scanf("%d",&a[i]);
  }

  QuickSort(a,0,n);
  
  for (i = 0;i < n;i++) {
    printf("%d\t",a[i]);
  }
  
  printf("\n");
  
  return 0;
}
