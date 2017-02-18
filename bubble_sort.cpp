#include<iostream>
using namespace std;

int main(){

	int A[]= {35,10,55,20,5};
	int n=5;
	
	for (int i=n; i>1; i--){
	
		for(int j=0;j<i-1;j++)
			if(A[j] > A[j+1])
			{
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
			}
			
cout<<"\nSorted Array is: "<<endl;
	for(int x=0; x<n; x++)
	{
		cout<<A[x];
		cout<<" ";
	}
	cout<<"\n";}

}
