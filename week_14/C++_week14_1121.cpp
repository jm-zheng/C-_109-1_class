#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
	
	
/*	//--------���}�ɮ�--------------
	fstream file;
	file.open("test.txt",fstream::in);
	if(file.is_open())
	{
		cout<<"Open successfully"<<endl ;
	}*/	
/*	//----------����--------------
	fstream file;
	file.open("test.txt",fstream::in);
	file.close();
	if(file.is_open())
	{
		cout<<"Open successfully"<<endl ;
	}
	else 
	{
		cout<< "Close file"	<<endl;
	} */
/*	//-------------Ū��-------------------
	fstream file;
	file.open("test.txt",fstream::in);
	string str1, str2,str3;
	
	file >>str1 >>str2>>str3;
	
	cout << str1 <<endl<<str2<<endl<<str3;
	*/
	
/*	//---------Ū��getline----------
	fstream file;
	file.open("test.txt",fstream::in);
	string str1;
	getline(file,str1);
	cout <<str1;*/
	
/*	//-----------���X�ɮ�---------------
	fstream file;
	file.open("test.txt",fstream::in);
	string str1;
	int i;
	
	while(file >>str1)
	{
		i++;
		cout <<i<<" : "<< str1<<endl;
	}
	file.close();
	file.open("test.txt",fstream::in);
	i=0;
	while(getline(file,str1))
	{
		i++;
		cout <<i<<" : "<< str1<<endl;
	}*/
	
/*	//---------�g�� �л\-----------
	
	fstream file;
	file.open("test.txt",fstream::in | fstream::out );
	file <<"Hello"<<endl<<" this " << endl <<"world"<<endl;
	file.close();*/ 
	
/*	//----------�g�� �s�W------------- 
	fstream file;
	file.open("test.txt",fstream::in | fstream::app );
	file <<endl<<"Hello"<<endl<<" this " << endl <<"world"<<endl;
	file.close();*/
}

