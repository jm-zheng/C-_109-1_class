#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
/*	vector<int> vec1;
	vec1 = {1,2,3,4,5};
	vector<char> vec2={'a','b'};*/
	
	
/*	//--------向量存取-------------
	vector<int> vec1;
	vec1 = {1,2,3,4,5};
	vector<string> vec2={"132123","asdad"};
	cin >>vec2[1];
	
	cout << vec2[0]<<endl;
	cout  << vec2[1];*/
	
	/*for(int i=0; i<5;i++)
	{
		cout << vec1[i]<< " ";
	}
	
/*	//------size---------
	int len=0;
	vector<int> vec1;
	vec1 = {1,2,3,4,5};
	
	for(int i=0; i<5;i++)
	{
		cout << vec1[i]<< " ";
	}
	
	len = vec1.size();
	cout <<endl<<len;*/
	
/*	//-------push back----------------
	int len=0;
	vector<int> vec1;
	vec1 = {1,2,3,4,5};
	for(int i=0; i<vec1.size();i++)
	{
		cout << vec1[i]<< " ";
	}
	
	cout <<"size:"<<vec1.size()<<endl;
	
	vec1.push_back(80);
	
	for(int i=0; i<vec1.size();i++)
	{
		cout << vec1[i]<< " ";
	}
	
	cout <<"size:"<<vec1.size();*/
	
	//---------------------------
/*	//-------pop back----------------
	int len=0;
	vector<int> vec1;
	vec1 = {1,2,3,4,5};
	for(int i=0; i<vec1.size();i++)
	{
		cout << vec1[i]<< " ";
	}
	
	cout <<"size:"<<vec1.size()<<endl;
	
	vec1.pop_back();
	
	for(int i=0; i<vec1.size();i++)
	{
		cout << vec1[i]<< " ";
	}
	
	cout <<"size:"<<vec1.size();*/
	
	//---------front back---------------------
	
	vector<int> vec1;
	vec1 = {1,2,3,4,5};
	int front_number=0,back_number=0;

	front_number = vec1.front();
	back_number = vec1.back();
	
	cout << "front_number :" << front_number<<endl;
	cout << "back_number :" << back_number<<endl;
	
	

	
/*	//--------begin end--------------
	
	vector<int> vec1= {1,2,3,4,5};
	cout<< "vec1.begin :"<<*(vec1.begin())<<endl;
	cout<< "vec1.end-1 :"<<*(vec1.end()-1)<<endl;
	
	cout<< "vec1.end :"<<*(vec1.end())<<endl;*/
	
	
/*	//-----------iterator find-------------------
	
	vector<int> vec1= {1,2,3,4,5};
	vector<int>::iterator itor;
	
	itor = find(vec1.begin(), vec1.end(),4);
	if(itor != vec1.end())
	{
		cout << distance(vec1.begin(),itor) << endl;
	}		
	*/
	
/*	//------------erase-------------------------	
	vector<int> vec1= {1,2,3,4,5};
	int index ,val;
	cout <<"index :"<<endl;
	cin >>index;
	
	vec1.erase(vec1.begin()+index);
	for(int i=0;i<vec1.size();i++)
	{
		cout << vec1[i] <<" ";
	}*/
	
/*	//------------insert--------------------------
	vector<int> vec1= {1,2,3,4,5};
	int index ,val;
	cout <<"index :"<<endl;
	cin >>index;
	cout <<"val :"<<endl;
	cin >>val;
	
	vec1.insert(vec1.begin()+index,val);
	
	for(int i=0;i<vec1.size();i++)
	{
		cout << vec1[i] <<" ";
	}*/
	

/*	//------------HW1------------------
	int n=0,m=0;
	vector<int> vec1,vec2;
	cout <<"please input n number: "<<endl;
	cin >>n ;
	for(int i=0; i<n;i++)
	{
		int x;
		cin >>x;
		vec1.push_back(x);
	}
	cout <<"please input m number: "<<endl;
	cin >>m ;
	for(int i=0; i<m;i++)
	{
		int x;
		cin >>x;
		vec2.push_back(x);
	}
	for(int i=0; i<vec1.size();i++)
	{
		for(int j=0; j<vec2.size();j++)
		{
			if(vec1[i] == vec2[j])
			{
				vec1.erase(vec1.begin()+i);
				vec2.erase(vec2.begin()+j);
				i-=1;
				j-=1;		
			}
		}
	}
	for(int i=0;i<vec1.size();i++)
	{
		cout <<vec1[i];
		cout <<" ";
	}
		
	for(int i=0;i<vec2.size();i++)
	{
		cout <<vec2[i];
		cout <<" ";
	}*/
	
/*	//-------hw2-------------
	int n=0,m=0,q=0;
	vector<int> vec1;
	cout <<"please input n number: "<<endl;
	cin >>n ;
	for(int i=0; i<n;i++)
	{
		int x;
		cin >>x;
		vec1.push_back(x);
	}
	for(int i=0; i<n;i++)
	{
		cout<<vec1[i];
		cout<<" ";
	}
	cout <<endl;
	while(vec1.size()>0)
	{
		if(q==0)
		{
			vec1.erase(vec1.begin());
			for(int i=vec1.size()-1;i>=0;i--)
			{
				cout <<vec1[i]<<" ";
			}
			q=1;
		}
		else if (q ==1)
		{
			vec1.erase(vec1.end()-1);
			for(int i=0;i<vec1.size();i++)
			{
				cout <<vec1[i]<<" ";
			}
			q=0;
		}
		cout <<endl;
	}*/
	
/*	//----------hw3-------------------------
	int n=0 ,a=0,b=0;
	
	cout <<"please input n number: "<<endl;
	cin >>n ;
	vector<int> vec1[n];
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
		{
			int x;
			cin >>x;
			vec1[i].push_back(x);
		}
		
	}
	
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
		{	
			cout << vec1[i][j];
			cout <<" ";
		}	
		cout <<endl;
	}
	cout <<"想交換的項: ";
	cin >>a >>b;
	
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
		{	
			if(j == a)
			{
				swap(vec1[i][a],vec1[i][b]);
			}
		}	
		cout <<endl;
	}
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n;j++)
		{	
			cout << vec1[i][j];
			cout <<" ";
		}	
		cout <<endl;
	}*/
}
