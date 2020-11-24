#include<iostream>
#include<cstring>

using namespace std ;

void shifstring(char *str ,int shift);
int checkAnswer( char *sheet ,char *ans);
int checkAnswer( char *sheet ,char *ans);
int power(int , int );
int power2(int *x, int *y);
//--------ex void hello()------------
void hello ()
{
	cout << "hello";
	return ;
	cout << "world";
}

//--------setone-------------
void setone(int *arr ,int len)
{
	for (int i=0; i<len ; i++)
	{
		*(arr+i) = 1;
	}
}
int main(){

/*	//--------power-------
	int a =2,b=10, result=1;

	for(int i =0; i<b ;i++)
	{
		result *=a;
		
	}
	cout <<"result" <<result<<endl;
	
	cout<< "power(a,b)"<<power(a,b);*/
	//------ex void hello()------------------
	//hello();
	
/*	//-----------¶Ç§}----------------------
	int a =2,b=5;
	
	cout<< "power2(&a,&b)"<<power2(&a,&b)<<endl;
	cout << "a:" << a << "  b:" << b;*/
	
	//----------¶Ç°}¦C--------------------------
	int a[5];
	setone(a,5);
	for(int i=0; i<5 ;i++)
	{
		cout << a[i];
	}
	
	
/*  //-----------hw1----------------
	char test[5] , check[5];
	cout << "Sheet"<<endl;
	for(int i=0 ;i<5; i++)
	{
		cin >> test[i];
	}
	cout << "Ans"<<endl;
	for(int i=0 ;i<5; i++)
	{
		cin >> check[i];
	}
	
	cout << "point" << checkAnswer(test,check);*/
	
/*	//----------HW2---------------
	
	int arr[100] , brr[100], crr[200] , len =0 ;
	cout << "len :";
	cin >> len;
	
	for(int i=0 ;i<len; i++)
	{
		cin >> arr[i];
	}
	for(int i=0 ;i<len; i++)
	{
		cin >> brr[i];
	}
	
	cout << "crr :";
	mix(arr ,brr,crr ,len*2 );
	
	for(int i=0 ;i<len*2; i++)
	{
		cout<< crr[i]<<" ";
	}*/
	
/*	//--------hw3----------------
	
	char arr[100] ;
	int sh =0;
	cin.get(arr , sizeof(arr));
	cout<< "shift : "; 
	cin>> sh ;
	cout << arr <<endl;
	
	shifstring(arr , sh);
	
	cout << arr ;*/
	
	
}
int power(int x , int y)
{
	int power_result=1 ;
	for(int i =0;i<y ;i++)
	{
		power_result *=x;
	}
	return power_result;
}

int power2(int *x, int *y)
{
	int power_result=1 ;
	for(int i =0;i<*y ;i++)
	{
		power_result *= *x;
	}
	*x =0;
	*y = 0;
	return power_result;
}

/*int checkAnswer( char *sheet ,char *ans)
{
	int point=0;
	for(int i=0 ;i<strlen(sheet); i++)
	{
		if(*(sheet+i) == *(ans+i))
		{
			point +=20;
		}
	}
	return point;
}

void mix( int *a, int *b, int *c, int size )
{
	int x=0, y=0;
	for(int i=0 ;i<size; i++)
	{
		if( i %2 ==1)
		{
			*(c+i)= *(a+x);
			x+=1;
		}
		else 
		{
			*(c+i)= *(b+y);
			y+=1;
		}
	}
}

void shifstring(char *str ,int shift)
{
	for(int i=0 ;i<strlen(str); i++)
	{
		*(str+i) = *(str+i)  + shift;
	}
}*/
