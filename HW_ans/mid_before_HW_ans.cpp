#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std ;
//-----------第5週------------------------------------------------------
/*//--------hw1-----------------
	int arr[10]={0},cmp[10]={0},ans[10]={0},a=0,point,interval;
	bool equal=1;
	cin >> a;
	
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	
	cin >>point>>interval;
	cmp[0]=point;
	cout<<cmp[0];
	for(int i=1;i<a;i++)
	{
		cmp[i]=point+(interval*i);
		cout<<cmp[i];
	}
	
	if(interval!=0)
	{
		for(int i=0; i<a;i++)
		{
			for(int j=0; j<a;j++)
			{
				if(cmp[i] == arr[j]) 
				{
					ans[i]= 1;
					break;
				}
			}
		}
		cout << endl;
	}
	else
	{
		for(int i=0 ;i<a;i++)
		{
			if(cmp[0]==arr[i])ans[i]=1;
			
		
		}
	}

	for(int i=0; i<a;i++)
	{
		cout << ans[i];
		if (ans[i] !=1) 
		{
			equal =0;
			break;
		}
	}*/
	
/*	for(int i=point; i<a;i++)
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
			cout << arr[i+1] <<"xx"<<arr[i]<<endl;
			//if(arr[i+1]-arr[i] == interval)ans=1;
			if((arr[i]-interval)%interval==0)ans=1;
			else
			{
				ans=0; 
				break;
			} 
		}
			//{if(arr[i]%interval!=0)ans=0;} 
		
	}
	if(equal ==0)cout<<"false";
	else cout <<"true";
	*/
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
	cout <<"number"<<number;
	*/
/*	//-------hw3---------------
	int arr[30]={0},a=0,count=0;
	cin >> a;
	count = a;
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<a;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			
			if(arr[i]==arr[j])
			{
				count -=1;
				break;			
			}
		}
		
	}
	cout << count ;*/
	
	
	
	//----------第六週------------------------------------------- 
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
	
	
	
//----------第7週-------------------------------- 
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
	
/*	//------HW2-----------
	int arr[20],number=0,min=0,max=0,sum=0;
	int *ptr;
	ptr =arr;
	cin >> number;
	
	
	for(int i=0;i<number;i++)
	{
		cin >> *(ptr+i);
		cout <<i<<":"<<*(ptr+i)<< " ";
	} 
	cout << endl;
	min = *ptr+*(ptr+1);
	for(int i=0;i<number;i++)
	{
		for(int j=i+1;j<number;j++)
		{
			sum=*(ptr+i) +*(ptr+j);
			if(sum < min)min =sum;
			if(sum > max)max =sum; 
		}
	}
	cout << "min:"<<min<<endl;
	cout << "max:"<<max<<endl;*/
	
/*	//----------HW3-------------------
	char arr[10][9],bingo[9]={0},test[9]={0},ans_number[]="        "; 
	int number=0,ans=0,count=0;
	
	
	
	cin>>number;
	cout<<"輸入中獎號碼:";
	cin.ignore();
	
	for(int i=0;i<number; i++)
	{
		//cin.get(bingo,sizeof(bingo));
		//cin.ignore();
		//arr[i] = bingo;
		//cout << arr[i]<<endl;	7
		cin >> arr[i];
		cin.ignore();
		//cout << arr[i]<<endl;
	} 
	
	cout << "請輸入對獎號碼:";
	cin.get(test,sizeof(test));
	for(int i=0; i<number;i++)
	{
		for(int j=7; j>=0;j--)
		{
			cout <<arr[i][j]<<":"<<test[j]<<"  "<<arr[i];
			if(arr[i][j] ==test[j])
			{
				count+=1;
				if(count>=3)
				{
					for(int x=j+(7-j);x>=j;x--)
					{
						ans = 5; 
						ans_number[x]=test[x];
						cout <<"["<<x <<"]:"<<ans_number[x];
					}
					cout <<endl;
				}
				
			}
			else 
			{
				//ans +=1 ;
				break;
			}
			
		}
		cout<<endl;
	}
	cout <<"number:";
	if(ans ==5 )
	{
		for(int i=0;i<=7;i++)cout<<ans_number[i];
	}
	else
	{
		cout<<"no";
	}*/ 
	
/*	//----------HW3-------------------
	char arr[10][9],bingo[9]={0},test[9]={0},ans_number[]="        "; 
	int number=0,ans=0,count=0,display=0;
	
	
	
	cin>>number;
	cout<<"輸入中獎號碼:";
	cin.ignore();
	
	for(int i=0;i<number; i++)
	{
		//cin.get(bingo,sizeof(bingo));
		//cin.ignore();
		//arr[i] = bingo;
		//cout << arr[i]<<endl;	7
		cin >> arr[i];
		cin.ignore();
		//cout << arr[i]<<endl;
	} 
	
	cout << "請輸入對獎號碼:";
	cin.get(test,sizeof(test));
	for(int i=0; i<number;i++)
	{
		for(int j=7; j>=0;j--)
		{
			cout <<arr[i][j]<<":"<<test[j]<<"  "<<arr[i];
			if(arr[i][j] ==test[j])
			{
				count+=1;			
			}
			else 
			{
				if(count>=3)
				{
					display = count;
					for(int x=7;x>j;x--)
					{	
						ans_number[x]=test[x];
						cout <<"["<<x <<"]:"<<ans_number[x];
					}
					cout <<endl;
					ans = 5; 
				}
				count=0;
				//ans +=1 ;
				break;
			}
			
		}
		
		cout<<endl;
	}
	cout <<"number:";
	if(ans ==5 )
	{
		for(int i=8-display;i<=7;i++)cout<<ans_number[i];
	}
	else
	{
		cout<<"no";
	}*/
}
