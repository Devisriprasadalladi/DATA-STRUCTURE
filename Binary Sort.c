#include <stdio.h>
int main(){
  int arr[5]={1,2,3,4,5};
  int ele=5;
  int low=0,high=4;
  while(low<high){
    int mid=(low+high)/2;
    if(arr[mid]==ele){
      printf("element found");
        break;
    }
    else if(ele<arr[mid]){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  if(arr[low]==ele){
    printf("found");
  }
  else{
    printf("not found");
  }
}B
