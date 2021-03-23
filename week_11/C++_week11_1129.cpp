#include<iostream>
#include<string>

using namespace std;

int main(){
	
	
/*	//--------宣告初始化--------------
	string str1;
	str1 = "Hello";
	
	string str2= " World";
	
	cout << str1 <<str2;*/
	
/*	//----------Stiring 加法--------------------
	string str1 = "Hello";
	string str2= " World";
	string str3= str1+str2;
	str1 +=  World";
	cout << str3 << endl<<str1; */
	
/*	//--------字串類別的輸入 cin---------------------
	string str1 ,str2;
	
	cin >>str1>>str2;
	cout << "str1: "<<str1 <<endl <<"str2: "<<str2;  */
	
/*	//--------字串類別的輸入 getline---------------------
	
	string str1 ,str2;
	getline(cin ,str1);
	getline(cin ,str2);
	cout << "str1: "<<str1 <<endl<<"str2: "<<str2;  */
	
/*	//----------cin.ignnore()------------
	string str1 ,str2;
	cin >> str1;
	cin.ignore();
	getline(cin ,str2);*/
	
/*	//----------string 陣列性質------------------------
	string str1 ="Hello" ;
	cout << "str1: "<<str1 <<endl ;
	
	str1[0]='M';
	str1[2]='M';
	cout << "str1: "<<str1 <<endl ;
	
	string str2[5] ;
	
	str2[0] ="123";
	str2[1] ="XXX";
	
	cout << str2[0]<<str2[1];*/
	
/*	//------------length---------------------
	string str1 ="Hello" ;
	
	cout <<"str1_length: " <<str1.length();*/
	
/*	//-----------sub string--------------
	string str1 ="Hello World" ;
	string hello = str1.substr(0,5);
	string world = str1.substr(6,5);
	
	cout <<hello<<endl << world;*/
	
/*	//--------find-----------
	string str1 ="abcdefgh" ;
	int pos=str1.find("cde",0);
	if(pos != str1.npos)
	{
		cout << pos <<endl;
	}
	
	
	pos=str1.find("cji",0);
	if(pos != str1.npos)
	{
		cout << pos <<endl;
	}
	else
		cout << "no this string"<<endl;*/
		
/*	//--------insert-------------
	string str1 = "abcd";
	string str2= "efgh";
	
	str1.insert(3,str2);
	cout << "str1: "<<str1<<endl;
	
	str1="abcd";
	str1.insert(4,str2);
	cout << "str1: "<<str1<<endl;*/
	
	/*//----------compare-----------------
	string str1 = "abcdefg";
	string str2= "abcdefg";
	
	int result = str1.compare(str2);  // 比對字串一樣 
	cout << result <<endl;
	 str1 = "abcdc";
	 str2= "abcde";
	result = str1.compare(str2); //比對字串第一個不一樣 比較字串較小 
	cout <<result <<endl;
	
	str1 ="abcde";
	str2= "abcdd";
	result = str1.compare(str2); //比對字串第一個不一樣 比較字串較大 
	cout <<result <<endl;
	
	str1 ="abcdefg";
	str2= "abcdef";
	result = str1.compare(0,4,str2); //參數 是str1 (起點 長度)所以比較字元都一樣 比較字串較短 
	cout <<result <<endl;
	
	str1 ="abcdefg";
	str2= "abcd";
	result = str1.compare(0,6,str2); //所以比較字元都一樣 比較字串較長 
	cout <<result <<endl;*/
	
/*	//---------replace----------------
	string str1 = "Hello happy world!";
	string str2= "unhappy";
	
	str1.replace(6,5,str2);
	
	cout<<str1<<endl;*/
	

/*	//--------hw1-----------------------
	string str1,str2,str3;
	cout <<"輸入字串: ";
	getline(cin,str1);
	cout <<"輸入字元: ";
	cin>>str2 ;
	
	int a =0,b=0;
	
	do{
		b =str1.find(str2,a);
		str3 =str1.substr(a,b-a);
		cout <<str2<<"位置: "<< b<<endl<<"切割字串"<<str3<<endl;
		
		a=b+1;
	}
	
	while(str1.npos!=b);*/
	
/*	//---------hw2---------------
	
	string str1,str2;
	int a=0,b=0;
	cout <<"輸入字串: ";
	getline(cin,str1);
	
	for(int i=0;i<26;i++)
	{
		//-----只有小寫-------
		if(str1.find(0x61+i) == str1.npos)
		{
			cout <<"Not Pangram";
			return 0;
		}
		
		//------大小寫------------------
		if(str1.find(0x61+i) == str1.npos && str1.find(0x41+i) == str1.npos)
		{
			cout <<"Not Pangram";
			return 0;
		} 
	}
	cout << "Pangram"; */ 
	
/*	//---------hw3-----------------
	int string_number =0 ,find_number=0,char_number;
	cout <<"個數 :";
	cin >>string_number; 
	cin.ignore();
	string str1[string_number],com,com_replace;
	
	for(int i=0;i<string_number; i++)
	{
		cout <<i<<".字串 :";
		getline(cin,str1[i]);
		
	}
	
	
	while(find_number<str1[1].length())
	{
		int xx =str1[0].find(str1[1][find_number],0);
		if(xx != str1[0].npos) 
		{
			cout << str1[1][find_number];
			com += str1[1][find_number];
			//cout << str1[0][xx];
			//com += str1[0][xx];
		}
	
		find_number++;
	}
	cout<<endl <<"com : "<<com <<endl;
	char_number = com.length();
	cout <<"first char_number :"<<char_number <<endl;
	for(int i=2;i<string_number; i++)
	{
		find_number =0;
		while(find_number<com.length())
		{
			int xx =str1[i].find(com[find_number],0);
			if(xx != str1[i].npos) 
			{
				com_replace += com[find_number];
			}
			find_number++;
		}
		com = com_replace;
		cout <<"com : "<<com <<endl;
	}
	
	cout << "test ans char_number: "<< com.length()<<endl;
	
	//---------找到輸出有重複的-------------
	find_number =0;
	int find_count=0,find_point=0;
	while(find_number<com.length())
	{
		int xx =com.find(com[find_number],find_point);
		if(xx != com.npos) 
		{
			find_count+=1;
			if(find_count >1)
			{
				com_replace[xx]=0x00;
			}
			find_point=xx;
			find_point+=1;
			cout << "find_point"<<find_point<<endl;
		}
		else 
		{
			find_count =0;
			find_point =0;
			find_number++;
		}
	}
	//------輸出最後結果--------- 
	char_number =com_replace.length();
	for(int i=0;i<com_replace.length();i++)
	{
		if(com_replace[i]==0x00)
		{
			char_number -=1;
		}
	}
	cout << "fin ans char_number: "<< char_number;*/ 
}
