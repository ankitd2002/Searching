#include <iostream>
using namespace std;

int binarySearch(int  arr [], int size, int target) {

  int start = 0;
  int end = size-1;
  int mid = (start+end)/2;

  while(start <= end) {

      if(arr[mid] == target) {
        return mid;   // return index of the found element
      }else if (target > arr[mid]){
        start = mid + 1;     // going to the right 
      } else {
        end = mid -1;       // going to the left
      }
      mid = (start+ end) / 2;    // updating the mid element 
  }

  return -1;// if element not found


}

int main() {

  int arr [] = {10,20,30,40,50,60,70,80,90};
  int target = 20;
  int size = 9;

  int ansIndex = binarySearch(arr,size,target);
  if(ansIndex == -1) {
    cout<<" The element is not found " <<endl;
  }else{
    cout << "The binary Search index is " << ansIndex <<endl;
  }

  return 0;
}
