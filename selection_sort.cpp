#include<iostream>

using namespace std;

int main(){

	int A[]= {30,40,20,50,10};
int n=5;
	
	for (int i=0; i<n-1; i++){
		int min=A[i], index=i;
		for(int j=i+1; j<n; j++)
		{
			if (A[j]<min)
			{
				min= A[j];
				index=j;
			}
		}
		
		A[index]=A[i];
		A[i]=min;
		}
cout<<"\nSorted Array is: "<<endl;		

for(int i=0; i<n; i++)
	{
		cout<<A[i];
		cout<<" ";
	}
	cout<<"\n\n";
	

	
	}
	
	
