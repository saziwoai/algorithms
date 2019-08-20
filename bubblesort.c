/*
 * file-io.c  -- create directory recursively
 *
 * Copyright (C) 2019-2020 wang.yangbj (wang.yangbj@inspur.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING, if not see
 * <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int data[],int length)
{
  int i = 0;
  int j = 0;
  int temp = 0;
  
  for (;i < length - 1;i++) {
    for (;j < length - i;j++) {
      if (data[j] < data[j+1]) {
        temp = data[j];
        data[j] = data[j+1];
        data[j+1] = temp;
      }
    }
  }
}

int main(int argc,char**argv)
{
  int i = 0;
  int n = 0;
  int a[100] = {0};
  
  scanf("%d",&n);  /*data buffer size*/
  for (;i < n;i++) {
    scanf("%d",&a[i]);
  }
  
  BubbleSort(a,n);
  
  for (i = 0;i < n;i++) {
    printf("%d\t",a[i]);
  }
  printf("\n");

  return 0;
}
