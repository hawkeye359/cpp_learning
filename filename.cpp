#include<iostream>
using namespace std;



bool binarysearch(int a[], int n, int key){
	int init=0;
	int end=n-1;
	int mid=(init+end)/2;
	if(init > mid ){
		return false;
	}
	if(a[mid]==key){
		return 1;
	}

	if(key>a[mid]){
		init = mid - 1;
	}
	else{
		end = mid + 1;
	}
	return binarysearch(a+init,end - init +1, key);
}

int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	binarysearch(a,n,key);
}