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
			if(sum > min)max =sum; 
		}
	}
	cout << "min:"<<min<<endl;
	cout << "max:"<<max<<endl;*/
	
	//----------HW3-------------------
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
	}

	


	
}
