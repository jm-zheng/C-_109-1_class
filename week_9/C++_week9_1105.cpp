#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int cnt = 0;
int c;
int Fs(int x) ;
void com(int *src, int n, int value);
int bubble_sort_2(int arr[], int size);

void bubble_sort( int arr[]  ,int size)
{
	for(int i=0;i<size-1 ;i++)
	{
		for(int j=0;j<size-i-1 ;j++)
		{
			if(arr[j] > arr [j+1])
			{
				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1]=temp;				
				//swap(arr[j] ,arr[j+1]);
			}
			
		}
		cout <<endl<< "i:"<<i <<" arr: ";
		for(int x=0;x<10 ;x++)
		{
			cout << arr[x] << "  ";
		}
	}
}

int recursion_sum(int val)
{
	if (val == 1)
	{
		//cout << 1 <<" ";
		return 1;
	}
	else 
	{
		cout <<val + recursion_sum( val -1) <<"¡@";
		return val + recursion_sum( val -1);
	}
	
}
struct person_t {
  char name[10];
  int mid,fin,total;
};
struct human{
  	char *name;
	int hight;
//	float weight;
//	char grnder;
};
int main()
{
/*	//------bubble--------------
	int arr[10] ={ 1, 4 ,2 ,3 ,5, 9 ,6 ,8, 7 ,0};
//	bubble_sort (arr , 10);
//	bubble_sort_2(arr,10);
	cout << endl;
	for(int i=0;i<10 ;i++)
	{
		cout << arr[i] << "  ";
	}*/
	
	//----------recursive »¼°j------------------
		//cout <<"XXX"<< recursion_sum (5);
	
/*	//------------struct------------------
	struct person_t p = { 
        .name = "Michael", 
        .age = 37
    };  
	
	struct human TA;
	TA.name = "Zheng Jin Ming";
	TA.hight=170;	
	
	
	cout <<TA.name; 
	cout <<TA.hight; 
	*/
	
/*	//----------hw1----------------------
	int a;
	cin >>a ;
	cout << Fs(a);*/

	
/*	//-----------hw3--------------------
	char n[10];
	int number ;
	cin >> number;
	struct person_t aaa[number];
	struct person_t test;
	for(int i=0; i<number;i++)
	{
		cin >> aaa[i].name;
		//strcpy(aaa[i].name,n);
		cin >> aaa[i].mid >> aaa[i].fin;
		aaa[i].total =aaa[i].fin + aaa[i].mid;
	}
	for(int i=0; i<number-1 ;i++)
	{
		for(int j=0; j<number-i-1;j++)
		{
			if(aaa[j].total >aaa[j+1].total)
			{
				/*test = aaa[j];
				aaa[j] = aaa[j+1];
				aaa[j+1] =test ;
				swap(aaa[j],aaa[j+1]);
				cout << "XXX";
			}
		}
	}
	cout <<"Name\t\t"<<"Midterm\t\t"<<"Final\t\t"<<"Total\t\t"<<endl;
	for(int i=number-1; i>=0;i--)
	{
		cout <<aaa[i].name<<"\t\t"<<aaa[i].mid<<"\t\t"<<aaa[i].fin<<"\t\t"<<aaa[i].total<<endl;
	}*/
		//-----------hw2-----------------------
	
		 
    cin >> c;
    int arr[50];
    for(int i=0; i<c; i++) {
        cin >> arr[i];
    }
    com(arr, c-1, 0);
    cout << cnt-1;

}
void com(int *src, int n, int value) {
    if(n==-1) {
        cout << value <<endl;
        cnt++;
    }else {
        com(src, n-1, value);
        value *= 10;
        value += src[c-n-1];
        com(src, n-1, value);
    }
}

int Fs(int x)
{
	if (x == 0) return 0;
	
	else if (x ==1 ) return 1;
	
	else  return Fs(x-1)+Fs(x-2);
}


int bubble_sort_2(int arr[], int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr[i],arr[j]);
			}
		}
		cout <<endl<< "i:"<<i <<" arr: ";
		for(int x=0;x<10 ;x++)
		{
			cout << arr[x] << "  ";
		}
	}
}

