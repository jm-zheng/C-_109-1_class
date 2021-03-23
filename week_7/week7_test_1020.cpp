#include<iostream>
using namespace std ;


int main()
{
/*	//----------宣告指標----------------
	int a=5,b[20]={1};
	int *ptr , *ptr2;
	ptr = &a;
	ptr2 = b ;
	
	cout<<"ptr:"<< *ptr<<endl;
	cout<<"ptr2:"<<*ptr2;	*/
	

/*	//---------指標運算(值)----------------
	int a=5,b[20]={1,2,3};
	int *ptr , *ptr2;
	ptr = &a;
	ptr2 =b+1 ;
	
	cout<<"ptr:"<< *ptr<<endl;
	cout<<"ptr2:"<<*ptr2<<endl;	 
	cout<<"ptr2:"<<*(ptr2+1);*/
	 
/*	//-----------指標運算(址)-------------------
	
	int a=5,b[20]={1,2,3};
	int *ptr , *ptr2;
//	ptr = &a;
	ptr2 =b+1 ;
	
	cout<<"ptr:"<< *ptr<<endl;
	cout<<"ptr2:"<<ptr2<<endl;	 
	cout<<"ptr2:"<<(ptr2+1); */
	
/*	//-----------字元-------------------
	
	int a[20]={1,2,3};
	int *ptr= a ;
	cout<<"ptr:"<< *ptr<<endl;
//	ptr = &a;
	char b[20]="hello";
	char *ptr2 =b ;
	cout<<"ptr2:"<<ptr2<<endl;	 
	cout<<"ptr2:"<<(ptr2+1); */
	
/*	//------------指標陣列---------------------
	char *day[5]={"Mon","Tue","Wed","Thurs","Fri"};
	
	char *ptr2;
	//ptr2 =day;
	//ptr2= day;
	//cout<<"ptr2:"<<ptr2<<endl;	
	cout<<(void*)day[1]<<endl;
	//printf("%p", day[0]);*/
	
/*	//-------------HW1----------

	int arr[30]={0},a,count=0,number=0;
	int *ptr;
	ptr = arr;
	cin >> a;
	
	for(int i=0;i<a;i++)
	{
		cin>>*(ptr+i);
	}

	
	for(int i=0;i<a;i++)
	{
		for(int j =i+1; j<a ;j++)
		{
			if(*(ptr+i)==*(ptr+j))number=*(ptr+i);
		}	
		
	}
	cout <<"number:"<<number;*/
	
	//------HW2-----------
	
}
