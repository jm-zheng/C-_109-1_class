#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(){
	
	
/*	//--------打開檔案--------------
	fstream file;
	file.open("test.txt",fstream::in);
	if(file.is_open())
	{
		cout<<"Open successfully"<<endl ;
	}*/	
/*	//----------關檔--------------
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
/*	//-------------讀檔-------------------
	fstream file;
	file.open("test.txt",fstream::in);
	string str1, str2,str3;
	
	file >>str1 >>str2>>str3;
	
	cout << str1 <<endl<<str2<<endl<<str3;
	*/
	
/*	//---------讀檔getline----------
	fstream file;
	file.open("test.txt",fstream::in);
	string str1;
	getline(file,str1);
	cout <<str1;*/
	
/*	//-----------走訪檔案---------------
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
	
/*	//---------寫檔 覆蓋-----------
	
	fstream file;
	file.open("test.txt",fstream::in | fstream::out );
	file <<"Hello"<<endl<<" this " << endl <<"world"<<endl;
	file.close();*/ 
	
/*	//----------寫檔 新增------------- 
	fstream file;
	file.open("test.txt",fstream::in | fstream::app );
	file <<endl<<"Hello"<<endl<<" this " << endl <<"world"<<endl;
	file.close();*/
}

