#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;
int main ()
{
/*	//-------«Å§i-------------
	map<string,int> map1;
	map1 ={{"key",1},{"key2",2}};
	
	map<string,int> map2={{"key",3},{"key2",4}};
	
	string key;
	
	while(key !="0")
	{
		cin >> key;
		cout << map1[key] << "  "<<map2[key]<<endl;
	}*/
	
/*	//---------map size-------------
	map<string,int> map1;
	map1 ={{"key",1},{"key2",2}};
	
	cout << map1.size();*/
	
/*	//--------new key----------------
	map<string,int> map1;
	map1 ={{"key",1},{"key2",2}};
	string new_key;
	int new_data;
	while(new_key !="0")
	{
		cout<< "new_key: ";
		cin >> new_key ;
		cout<< "new_data: ";
		cin >> new_data ;
		map1[new_key] = new_data;
		cout << map1[new_key]<<endl<<map1.size() <<endl;
	}*/
	
	
/*	//--------iterator------------------
	map<string,int> map1;
	map1 ={{"key",1},{"key2",2}};
	map<string,int>::iterator iter;
	iter =map1.find("key");
	if(iter != map1.end())
	{	
		cout << iter ->first <<"   "<<iter->second<<endl;
	}	
	else 
	{
		cout <<" No this key"<<endl;
	}
	
	iter =map1.find("key3");
	if(iter != map1.end())
	{	
		cout << iter->first <<"   "<<iter->second<<endl;
	}	
	else 
	{
		cout <<" No this key"<<endl;
	}*/
	
/*	//--------erase--------------------
	map<string,int> map1;
	map1 ={{"key",1},{"key2",2}};
	map<string,int>::iterator iter;
	int result = map1.erase("key");
	cout <<result <<endl;
	 result = map1.erase("key");
	cout <<result <<endl;*/
	
	
/*	//---------HW1----------------------
	
	map<char,int> map1;
	int data=0;
	char input=5;
	for(char i=0x7a ;i>0x61;i-=2)
	{
		data+=1;
		map1[i] = data;
		map1[i-1]=data;
	}
	
	while (input != 0)
	{
		cin >> input;
		cout<<input<<": " <<map1[input] <<endl;
	}*/
	
/*	//----------hw2---------------------
	
	srand(time(NULL));
	
	int data,number;
	
	map<string,int> map1;
	map<string,int>::iterator itor;
	string key;
	cin >>number;
	for(int i=0 ;i<number;i++)
	{
		cout <<"key: ";
		cin >>key;
		data = rand()%100;
		map1[key]=data;
		cout<< key<< " :"<< map1[key]<<endl;
	}
	 
	while(key !="q")
	{
		cout <<"¤ñ¹ï key: ";
		cin >>key;
		cout <<"data: ";
		cin >>data;
		itor =map1.find(key);
		if(itor->second == data)
		{
			cout <<"success "<<endl;
		}
		else cout <<"fail "<<endl;
	}*/
	
/*	//---------HW3----------------------
	map<string,int> map1;
	map<string,int>::iterator itor;
	int count=0,comand,val;
	string key;
	cin >>count;
	for(int i=0;i<count;i++)
	{
		cout <<"comand: ";
		cin >>comand;
		if(comand == 1)
		{
			cout <<"key: ";
			cin >> key;
			cout <<"val: ";
			cin >> val;
			itor = map1.find(key);
			if(itor != map1.end())
			{
				itor->second = itor->second +val;
			}
			else map1[key] = val;
			
		}
		else if (comand == 2)
		{
			cout <<"key: ";
			cin >> key;
			itor = map1.find(key);
			if(itor != map1.end())
			{
				map1.erase(itor);
			}
			else cout <<"delet error"<<endl;
			
		}
		else if (comand == 3)
		{
			cout <<"key: ";
			cin >> key;
			
			itor = map1.find(key);
			if(itor != map1.end())
			{
				cout <<key<<"  val:"<<itor->second; 
			}
			else cout<<"0"; 
		}
		else cout << "input error"<<endl;
	}*/
	
	
	
}
