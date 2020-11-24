#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct human
{
	char name[20];
	char gender;	
};

struct Node_HW {
	char name[20];
	int mid;
	int final;
	Node_HW *next;
};

struct Node {
	int data;
	Node *next;
};

Node *insert(Node *head ,int d)
{
	if(head ==NULL)
	{
		Node *node =new Node();
		node -> data =d;
		node ->next = NULL;
		return node;
	}
	else 
	{
		Node *current =head;
		Node *node =new Node();
		node ->data =d ;
		node ->next =NULL;
		while(current -> next !=NULL)
		{
			cout << &current<<endl;
			current =current ->next;
		}
		current ->next =node;
		return head;
	}
	
}
void print(Node *head)
{
	while(head != NULL)
	{
		cout <<head ->data <<"   ";
		head =head ->next;
	}
}

Node_HW *insert_hw(Node_HW *head ,char *name ,int m,int f);
void print_HW(Node_HW *head);
Node_HW *delete_HW(Node_HW *head);
void swap_HW(Node_HW *head, int a,int b);
Node_HW *insert_free(Node_HW *head, int number,char name[10],int m,int f);
Node_HW *del_free(Node_HW *head, int number);
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
	
	
	
/*	//--------動態記憶體配置--------------


	
		
		Node *head =NULL;
		
		head =insert(head,20);
		head =insert(head,30);
		print(head);
		return 0;*/
		
	//--------HW1------------
		
		
		/*Node_HW *head =NULL;
		char aaa[5]="aaa"; 
		head =insert_hw(head,aaa,50,30);
		head =insert_hw(head,aaa,30,80);
		print_HW(head);
		delete_HW(head);
		print_HW(head);
		head =insert_hw(head,aaa,100,90);
		head =insert_hw(head,aaa,15,70);
		print_HW(head);
		swap_HW(head ,2 ,3);
		print_HW(head);
		return 0;*/
		
		
	char comand ,name_text[10];
	int mid_text , fin_text , a_node ,b_node;
	Node_HW *head =NULL;	
	while(comand != 's' )
	{
		cout << "function:";
		cin >> comand;
		if(comand == 'i')
		{	
			cout << "name :";
			cin >> name_text ;
			cout <<"mid: ";
			cin >> mid_text ;
			cout <<"fin: ";
			cin >> fin_text ;
			
			head =insert_hw(head ,name_text,mid_text,fin_text);
		}
		else if(comand == 'd') {head=delete_HW(head);}
		else if(comand == 'w') 
		{
			cout <<"a_node: ";
			cin >>a_node;
			cout <<"b_node: ";
			cin >>b_node;
			swap_HW(head ,a_node,b_node);
			
		}
		else if(comand == 'p') print_HW(head);
		else if(comand == 'x')
		{
			cout << "insert_node :";
			cin >>a_node;
			cout << "name :";
			cin >> name_text ;
			cout <<"mid: ";
			cin >> mid_text ;
			cout <<"fin: ";
			cin >> fin_text ;
			head=insert_free(head ,a_node ,name_text,mid_text,fin_text);
		}
		else if(comand == 'c') 
		{
			cout << "delete_node :";
			cin >>a_node;
			head = del_free(head,a_node);
		}
	}	
	
	
}
Node_HW *insert_hw(Node_HW *head ,char *name ,int m,int f)
{
	if(head ==NULL)
	{
		Node_HW *node =new Node_HW();
		strcpy(node->name, name);
		node -> mid =m;
		node -> final =f;
		node ->next = NULL;
		return node;
	}
	else 
	{
		Node_HW *current =head;
		Node_HW *node =new Node_HW();
		strcpy(node->name, name);
		node ->mid =m ;
		node -> final =f;
		node ->next =NULL;
		while(current -> next !=NULL)
		{
			current =current ->next;
		}
		current ->next =node;
		return head;
	}
	
}
Node_HW *delete_HW(Node_HW *head)
{	
	Node_HW *current =head;
	Node_HW *fin_node ;
	int i=0;
	while(current -> next !=NULL)
	{	
		i++;
		fin_node= current;
		current =current ->next;
	}
	cout<<"delete data."<<"name:" <<current ->name <<"  mid:" <<current -> mid <<"  fin:"
		<<current->final<<endl;
        if(i>=1)
        {
        	fin_node ->next = NULL;
			delete[] current ;
			return head;
		} 
		else
		{
			fin_node ->next = NULL;
			delete current ;
			head = NULL;
			return head;
		}
	
		
}
void print_HW(Node_HW *head)
{	
	int i=0;
	if(head != NULL)
	{
		while(head != NULL)
		{	i++;
			cout<<i<<".name:" <<head ->name <<"  mid:" <<head -> mid <<"  fin:"
			<<head->final<<endl;
			head =head ->next;
		}
	}
	else cout << "head : NULL"<<endl;
	
}
void swap_HW(Node_HW *head, int a,int b)
{
	int i=0, m,f;
	char n[10];
	Node_HW *current =head;
	Node_HW *node_a;
	while(current != NULL)
	{	
		i++;
		if(i == a)
		{
			node_a = current;
			strcpy(n,node_a->name);
			m=node_a->mid;
			f=node_a->final;
		}
		else if( i == b)
		{
			strcpy(node_a->name,current ->name);
			node_a->mid = current->mid;
			node_a->final = current->final;
			
			strcpy(current ->name,n);
			current->mid =m;
			current->final =f;
		}
		current = current->	next;
	}
	
}
Node_HW *insert_free(Node_HW *head, int number,char name[10],int m,int f)
{
	Node_HW *current =head;
	Node_HW *insert ;
	int i=0,total=1;
	if(head ==NULL)						//增加第一筆資料	
	{
		Node_HW *node =new Node_HW();
		strcpy(node->name, name);
		node -> mid =m;
		node -> final =f;
		node ->next = NULL;
		return node;
	}
	else 
	{
		while(current->next != NULL)  // 計算鏈結串列有幾筆資料 
		{	
			total++;
			current =current ->next;	
		}
		
		if(total >= number)
		{
			current = head;
			while(current != NULL)
			{	
				i++;
				if( i == number && i >1)   // 插入有資料後新增任意點的資料 (除了第一點跟最後點) 
				{
					insert =current->next;
					Node_HW *node =new Node_HW();
					strcpy(node->name, name);
					node ->mid =m ;
					node -> final =f;
					current->next=node ;
					node ->next= insert;	
				}
				else if (number == 1 && i == 1 )  //插入有資料後的第一筆資料 
				{
					Node_HW *node =new Node_HW();
					strcpy(node->name, name);
					node ->mid =m ;
					node -> final =f;
					node -> next = current;
					head = node;
					return head;
				}
				current =current ->next;	
			}
		}
		else if(total< number)    // 插入有資料的最後一筆資料 
		{
			Node_HW *node =new Node_HW();
			strcpy(node->name, name);
			node ->mid =m ;
			node -> final =f;
			node ->next =NULL;
			current->next=node ;
		}
				
		return head ;
	}
	
	
}
Node_HW *del_free(Node_HW *head, int number)
{
	Node_HW *current =head;
	Node_HW *del_flag ;
	int i=0,total_node=0;
	while(current != NULL) 			// 計算鏈結串列有幾筆資料 
	{	
		total_node++;
		current =current ->next;
	}
	current = head;
	while(current != NULL)
	{	
		i++;
		if(total_node == 1)
		{
			if( i== number && current->next == NULL )	// 刪除只有一筆資料的第一筆資料 
			{
				del_flag ->next = NULL;
				delete current ;
				head = NULL;
			}
		}
		else 
		{
			if(i>=1)
			{
				if( (i+1) == number)				// 刪除有資料的任一筆資料
				{
					del_flag =current->next->next;
					cout<<"delete data."<<"name:" <<current ->next->name <<"  mid:" <<current ->next-> mid <<"  fin:"
					<<current->next->final<<endl;
					delete current->next ;
					current->next = del_flag;
						
				}
				else if(i == number && current->next != NULL)		// 刪除有資料的第一筆資料
				{
					head =current->next;
					cout<<"delete data."<<"name:" <<current ->name <<"  mid:" <<current -> mid <<"  fin:"
					<<current->final<<endl;
					delete current ;
					
				}
			}
			
		}
		current =current ->next;
	}
	return head;
	
}
