#include<iostream>

using namespace std;

int main()
{
/*
	//-----ex1----------
	int a =10;
	cout << &a <<endl;
	*/
	
/*	//------ex2--------
	int arr[10];
	arr[0]= 5;
	cin >> arr[1];
	cout <<arr[0] <<"  "<<arr[1];*/
	
/*	//------ex3--------
	int arr[10],sum=0;
	
	for(int i=0;i<10;i++)
	{
		arr[i]=i;
	}
	for(int i=0;i<10;i++)
	{
		sum+=arr[i];
	}
	cout << sum;*/
	
/*	//-------ex4-----------
	int arr[2][3]={{1,2,3},{4,5,6}};
	int sum =0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum += arr[i][j];
		}
	} 
	 
	cout <<sum;*/
	
	//--------hw1-----------------
	int arr[30]={0},a=0,point,interval;
	bool ans=1;
	cin >> a;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	cin >>point>>interval;
	
	for(int i=point; i<a;i++)
	{
		if(interval == 0)
		{
			if(arr[i]!=arr[point])
			{
				ans=0; break;
			}
			else  ans=1;
		}
		else 
		{
			cout << interval  <<"xx"<<arr[i]<<endl;
			//if(arr[i+1]-arr[i] == interval)ans=1;
			if(arr[i]%interval==0)ans=1;
			else
			{
				ans=0; 
				break;
			} 
		}
			//{if(arr[i]%interval!=0)ans=0;} 
		
	}
	if(ans ==0)cout<<"false";
	else cout <<"true";
	
/*	//-------hw2-----------------
	int arr[30]={0},a,count=0,number=0;
	cin >> a;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	cin >> number;
	
	for(int i=0;i<a;i++)
	{
		if(arr[i]==number)count+=1;
		
	}
	cout <<"number:"<<count;*/
	
	//-------hw3---------------
/*	int arr[30]={0},test[30]={0},a,number=0,count=0;
	cin >> a;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			
			if(arr[i]==arr[j])
			{
				count +=1;
				if(count > 1)arr[j]=0;				
			}
			cout<<arr[j]<<endl;
		}
		count =0;
	}
	
	for(int i=0;i<a;i++)
	{
		if(arr[i]!=0) number+=1;
	}
	cout <<"number"<<number;*/
	

}

