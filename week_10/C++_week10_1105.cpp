#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct human
{
	char name[20];
	char gender;	
};

struct node {
	int data;
	node* next;
};

node *insert(node *head ,int d)
{
	if(head ==NULL)
	{
		node *node =new node();
		node -> data =d;
		node ->next = NULL;
		return node;
	}
/*	else 
	{
		node *current =head;
		node *node =new node();
		node ->data =d ;
		node ->next =Null;
		while(current -> net !=NULL)
		{
			current ==current ->next;
		}
		current ->next =node;
		return head;
	}*/
	
}
void print(node *head)
{
	while(head != NULL)
	{
		cout <<head ->data <<"   ";
		head =head ->next;
	}
}
int main(){
	
	
/*	//--------動態記憶體配置--------------
	int arr[10] ,*x;
	x =new int [15];
	
	int *y =new int[15];

	cout <<"X size:"<<sizeof(x)<<endl;
	for(int i= 0 ;i<15;i++)
	{
		x[i]=i;
	}

	for(int i= 0;i<15;i++)
	{
	
		cout <<x[i]<<endl; 
	}	
	cout <<"釋放後"<<endl;
	delete[] x;
	
	for(int i= 0 ;i<15;i++)
	{
	
		cout <<x[i]<<endl; 
	}*/
	
/*	//-------struct ------- 
	
	struct human TA {"Jimmy Zheng",'M'};
	struct human *ptr = &TA;
	cout << ptr->name <<endl;
	cout <<ptr ->gender << endl;*/
	
	
	
	//--------動態記憶體配置--------------


	
		
		Node *head =NULL;
		
		head =insert(head,20);
		head =insert(head,30);
		print(head);
		return 0;
	
	
}


