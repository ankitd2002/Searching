#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
  int start = 0;
  int end = n-1;
  //there is some flaw in below line, HW ?
  int mid = (start+end)/2;
  while(start <= end) {
    ///found
    if(arr[mid] == target) {
      //return index of the found element
      return mid;
    }
    else if(target > arr[mid]) {
      //right me jao
      start = mid + 1;
    }
    else if(target < arr[mid]) {
      //left me jao 
      end = mid - 1;
    }
    //mid update
    mid = (start + end)/2;
  }
  //agar yaha tk pohohche ho
  //iska matlab element nahi mila tumhe
  return -1;
}

int findFirstOccurence(int arr[], int n, int target) {
  int s = 0;
  int e = n-1;
  int mid = (s+e)/2;

  //BEST Practice
  //int mid = s +(e-s)/2;
  
  int ans = -1;

  while(s<=e) {
    if(arr[mid]==target) {
      //ans store
      ans = mid;
      //left me jao
      e = mid-1;
    }
    else if(target > arr[mid]) {
      //right me jao
      s = mid+1;
    }
    else if(target < arr[mid]) {
      //left me jao
      e = mid-1;
    }
    //galti yaha krte h hmesha
    mid = (s+e)/2;
  }
  return ans;
}


int findLastOccurence(int arr[], int n, int target) {
  int s = 0;
  int e = n-1;
  int mid = s +(e-s)/2;
  int ans = -1;

  while(s<=e) {
    if(arr[mid]==target) {
      //ans store
      ans = mid;
      //right me jao
      s = mid+1;
    }
    else if(target > arr[mid]) {
      //right me jao
      s = mid+1;
    }
    else if(target < arr[mid]) {
      //left me jao
      e = mid-1;
    }
    //galti yaha krte h hmesha
    mid = (s+e)/2;
  }
  return ans;
}

int findTotalOccurence(int arr[], int n, int target) {
  int firstOcc = findFirstOccurence(arr, n, target);
  int lastOcc = findLastOccurence(arr, n, target);
  int total = lastOcc - firstOcc +1 ;
  return total;
}




int main() {

  int arr[] = {1,2,3,4,5,6,7,8};
  //int target = 30;
  int n =8;

  cout<<"Missing element is: " << findMissingElement(arr, n);

  // int ans = findTotalOccurence(arr, n, target);
  // cout << "Ttoal Occ is:  "<< ans << endl;
  // int ansIndex = findLastOccurence(arr, n, target);

  // if(ansIndex == -1) {
  //  cout << "Element not found " << endl;
  // }
  // else {
  //  cout << "Element found at Index: " << ansIndex << endl;
  // }
  

  return 0;
}
