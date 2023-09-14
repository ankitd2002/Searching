#include <iostream>
using namespace std;

// Question 1 Sorting : find first occurance of a number in a sorted array

int firstOccur(int  arr [], int size, int target) {

  int start = 0;
  int end = size-1;
  int mid = (start+end)/2;    // start + (end - start)/ 2   // start / 2  + end / 2
  int ans = -1;

  while(start <= end) {

      if(arr[mid] == target) {
        ans = mid; // find ans 
        end = mid -1;  // go to the left
    
      }else if (target > arr[mid]){
        start = mid + 1;     // going to the right 
      }else {
        end = mid -1;       // going to the left
      }
      mid = (start+ end) / 2;    // updating the mid element 
  }

  return ans;// if element not found


}

int main() {

  int arr [] = {10,20,30,30,30,40,50};
  int target = 30;
  int size = 7;

  int ansIndex = firstOccur(arr,size,target);
  if(ansIndex == -1) {
    cout<<" The element is not found " <<endl;
  }else{
    cout << "The first occurance index is " << ansIndex <<endl;
  }

  return 0;
}
