#include <iostream>
using namespace std;


int main ()
{
	//--------------week3 ex1-------------------

	/*int age ;
	cout << "Enter your age"; 
	cin >> age ;
	if(age >=18)
	{
		cout << "Yes"<<endl;
	}
	cout << "xxxxxx";
	
	
	system("pause");
	return 0;*/
	
	//----------------week3 ex2-----------------------
	/*bool gender ;
	cin >> gender ;
	if (gender)
	{
		cout<< "Male";
	}
	else
	{
		cout<< "Female";
	}
	cout<< " are all human \n";
	
	system("pause");
	return 0;*/
	//----------------week3 ex3-----------------------
	/*char blood_type;
	cin >>blood_type;
	if(blood_type == 'A')
	{
		cout << "A";
	}
	else if (blood_type == 'B')
	{
		cout << "B";
	}
	else if (blood_type == 'O')
	{
		cout << "O";
	}
	else 
	{
		cout << "AB";
	}
	cout <<" type";
	system("pause");
	return 0;*/
	//----------------week3 ex4-----------------------
/*	char degree;
	cin >> degree;
	switch(degree)
	{
		case 'E':
			cout << "EE";
			break ;
		case 'C':
			cout << "CE";
			break;
		case 'M':
			cout << "ME";
			break;
		default:
			cout << "Other";
			
	}*/
	
	//----------hw1---------------
	/*float a ;
	cin >> a;
	if(a >=-100.0 && a<=100.0 )
	{
		a= a * 9 / 5 +32;
		cout << a;
	}*/
	//----------hw2---------------
	/*float h ,w;
	cin >> h >> w;
	if(1<=h<=2.2)
	{
		if(30.0<=w<=200.0)
		w=w/(h*h);
		cout <<w ;
	}*/
	//----------hw3---------------
	/*int a,b,c ;
	cin >>a >> b>>c;
	if((a+b)>c && (a+c)>b &&(c+b)>a)
	{
		cout<<"ok";
	}
	else cout<<"error";*/
	
	//----------hw3--------------
	int a ;
	cin >> a;
	if (99999999>=a&&a>=10000000)
	{
		a=a %1000;
		if(a ==923) cout<< "bingo";
		else cout << "Nope";
	}
	else cout << "error" ;
	
	
}
