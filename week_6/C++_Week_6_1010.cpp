#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{

	//-----ex1----------
	int b=0b11,g = 011,h=0x11;
	char a ='A';
	cout<<"b(2進位):"<< b<<endl;
	cout<<"g(8進位):"<< g<<endl;
	cout<<"h(16進位):"<< h<<endl;
	cout<<"字元A對應的整數(10進位)"<<int(a)<<endl;
	int c = 'A';
	cout <<"字元A對應的整數(16進位)"<<hex<<c;
	
	/*int arr[3][4]={{12,23,42,18},{43,22,16,14},{31,13,19,28}};
	int (*num)[4] = arr;
	cout << num+1 << endl;
	cout << *(num+1) << endl;
	cout << **(num+1) << endl;*/
	
/*	//------ex2---sizeof-----
	char a[7]= "123456";
	
	cout <<"a:"<<a<<endl;
	cout <<"sizeof :" << sizeof(a)<<endl; //陣列的大小 
	
	int size =8;
	cin.get(a,size);  // size 位置也可以是常數  也可以 sizeof(a) 陣列的大小 
	cout <<"cin.get()"<<a<<endl;
	cin >>a ;
	cout<< "cin"<<a;*/
/*	//------cin.get小訣竅------------------------
	char a[20]="123",b[20];
	int c;
	cin>>c;
//	cin.ignore();
	cin.get(a,sizeof(a)).get();
	cout<<"c:"<<int(c)<<endl;
	cout<<"a:"<<a<<endl;

//	cin.ignore();
	cin.get(b,sizeof(b));
	cout<<"b:"<<int(b[0])<<endl;*/
	
/*	//------ex3--------
	char k[10]="hello!";
	int a[5]= {1,2,3};
	cout << sizeof(a)<<endl;  // 找出位元組數的大小 4byte*5 =20 
	cout << strlen(k);*/

	
/*	//-------ex4-----------
	char k[20]="hello";
	char l[20]="world!"; //他是直接接起來的  所以要注意空格 
	strcat(k,l);
	cout << k <<"　"<<strlen(k);*/

/*	//--------ex5--------- 
	char k[20]="123456789";
	char l[20]="world!"; 
	strcpy(k,l);
	cout << k <<"　"<<strlen(k);*/
	
/*	//---------ex6-----------------
	char k[20]="hello Y";
	char l[20]="hello Y "; 
	char h[20]="hello Y";
	cout << strcmp(k,l);*/
	
/*	//---------ex7-----------------
	char k[20]="3";
	cout<<"1"<<k+123<<endl;
	cout<<"2" <<atoi(k)+123<<endl;
	
	float c;
	char dd[10]="0.55";
	cout <<dd<<endl; 
	cout <<atof(dd) +0.5<<endl; */ 
	
/*	//---------ex8-----------------
	int i=100;
	char k[20]="3";
	
	itoa(i,k,10);
	cout<<strlen(k)<<endl;
	cout << k;*/




	
/*	//-------hw1-------------------
	char a[20]={0}, b[3]={0};
	
	int ans=0;
	cin.get(a,sizeof(a));
	cout << strlen(a);
	if(strlen(a)>=8)
	{
		for(int i=0;i<sizeof(a); i++)
		{
			if(a[i]>=0x30&&a[i]<=0x39) 
			{
				b[0] ='1';	
			}
			else if (a[i]>=0x41&&a[i]<=0x5a)
			{
				b[1] ='1';
			}
			else if (a[i]>=0x61&&a[i]<=0x7a)
			{
				b[2] ='1';
			}
			else
			{
				break;
				ans =2;
			}
		}
	}
	else ans=2;
	
	for(int i=0;i<3;i++)
	{
		cout << b[i]<<endl;
		if(b[i] != '1' ) 
		{
			ans =2;
			break;
		}
		else ans = 1;
	}
	
	if(ans == 1)cout<< "success";
	else cout << "error" ;*/

	
/*	//-------hw2-------------------
	char a[20]={0};
	char b[10]={0};
	int number=0;
	
	cin.get(a,sizeof(a));
	
	for(int i=0;i<sizeof(a); i++)
	{
		if((a[0]>=0x61) && (a[0]<=0x7a))
		{
			a[0] -=0x20;
			b[number] = a[0];
			number++;
			b[number]= '.';
			
		}
		else if (a[i] == ' ')
		{
			number=number+1;
			a[i+1]-=0x20; 
			
			b[number]=a[i+1];
			cout <<b[number]<<endl;
			number=number+1;
			b[number] ='.';
			cout <<b[number]<<endl;
		}
	}
	
	for (int i;i<10;i++)
	{
		if(b[i] == 0x00)
		{
			b[i-1]=0x00;
			break;
		}
		
	}
	

	
	cout <<a <<endl;
	cout << b;*/
	
/*	//------hw3--------
	char a[20]={0};
	int number=0,mid=0,ans=0;
	 
	cin >>a;
	number=strlen(a);

	
//	if(number %2 ==1)
//	{
		mid=number/2;
		 cout <<"*"<<number <<endl;
		  cout <<"A"<<mid <<endl;
		  
		for(int i=0;i<=mid;i++)
		{	
			number-=1;
			cout <<number <<endl;
			cout <<a[i]<<"x"<<a[number]<<endl;
			
			if(a[i]!=a[number])
			{
				ans=2;
				cout <<"AA";
				break;
			}
			
		}	
		if(ans ==2) cout<< "no";
		else cout << "yes";
//	}
	/*else 
	{
		mid =number/2-1;
		number-=1;
		for(int i=0;i<=mid;i++)
		{
			if(a[i]!=a[number-i])
			{
				ans=2;
				cout <<"AA";
				break;
			}
		}
	}*/
	

	
}
	

