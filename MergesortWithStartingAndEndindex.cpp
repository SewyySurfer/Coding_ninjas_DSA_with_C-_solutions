// This merge sort is done using divide and conquer algorithm.
// Key points : Always delete dynamically alloted arrays to free the allocated space because sometimes this can cause an error
// take care of si as sometimes you will get the urge to use 0 instead of si for be careful

#include<iostream>                        
#include<bits/stdc++.h>
using namespace std;

void merge(int input[], int si, int ei) {
  int size = ei - si + 1;
  int mid = (si + ei) / 2;
  int *out = new int[size];    // using ei+1 instead of size is giving the correct answer in some cases but not in all cases so don't use (ei+1). 
  int i = si;
  int j = mid + 1;
  int k = 0;

  while (i <= mid && j <= ei) {
    if (input[i] > input[j]) {
      out[k] = input[j];
      j++;
      k++;
    } else {
      out[k] = input[i];
      i++;
      k++;
    }
  }
  while (i <= mid) {
    out[k] = input[i];
    k++;
    i++;
  }
  while (j <= ei) {
    out[k] = input[j];
    k++;
    j++;
  }
  int m = 0;
  for (i = si; i <= ei; i++) {
    input[i] = out[m];
    m++;
  }
  delete[] out;
}

void mergeSort(int input[], int si, int ei) {
  if (si >= ei)
    return;

  int mid = (si + ei) / 2;
  mergeSort(input, si, mid);
  mergeSort(input, mid + 1, ei);
  merge(input, si, ei);
}


int main()
{
    int arr[] = { 40, 10, 30, 600};
    mergeSort(arr, 0, 3);
    for(int i= 0 ; i<= 3 ; i++)
    {
      cout<< arr[i]<< endl;
    }
    
    return 0; 
    
}
