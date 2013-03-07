#include <stdio.h>
#include <iostream>

void BublSort(int* a, int N);

int main()
{	
	int N;
	std::cin>>N;
	std::cout<<std::endl;
	int* a = new int[N];
	for (int i=0;i<N;i++)
		std::cin>>a[i];
	
	BublSort(a,N);

	for (int i=0;i<N;i++)
		std::cout<<a[i];
	
	delete[] a;
	return 0;
}

void BublSort(int* a, int N)

{
		for (int j=N-1;j>0;j--)
	{
		for (int i=0;i<j;i++) 
		if (a[i]>a[i+1])
	{
		int temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
}


    