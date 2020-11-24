#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std ;

int main() {
	
 /*   //------while------

  	int count =60;
  	while(count >0)
  	{	
	  	count--;
  		cout<< count<<endl;
  		
	}*/
	
/*	//------do while----------
	int  count1 =60;
	do
	{	
		count1 --;
		//if(count1 == 30) break;
		
		cout<< count1<<endl;
		
		
		
	}
	while(count1 >0);*/
	
/*	//-----------九九--------------
	
	
	
	
	
	
	
	 */ 

/*	//---------圖形-----------
	int x=0,y=0;
	
	for(x=1; x<=5;x++)
	{
		for(y=5-x;y>=1;y--)
		{
			cout<<"*";
		}
		for(y=1;y<=x;y++)
		{
			cout << "x";
		}
		
		cout << endl;
	}*/
	 
	
	
/*	//--------continue---------------- 
	int sum=0 ,x=0;
	for( x=1;x<=4;x++)
	{	
		cout << "x:" <<x<<endl;
		if(x%3==0)
		{
			continue; //當次的for的程式會跳出不執行 
		}
		sum+=x;
	}
    cout << sum;*/
    
    //--------加法器----------------- 
    
 /*   int sum =0;
    bool flag =true;
    while(flag)
    {
    	int k;
    	cin >> k;
    	if(k == 0) break;
    	
    	sum +=k;
	}
	cout <<"sum:" <<sum;*/
	
	
/*    //----亂數------------
   		//srand(time(NULL));
   		for(int i=0 ;i<5;i++ )
   		{
		//  srand(time(NULL));
			//srand(1);
	    	int x= rand();
		    cout << x<<endl;
   		 }
*/

/* 	//----骰子------------
   		srand(time(NULL));
    	int x= rand();
	    cout <<x<<endl;
	    x %= 6;
	    x+=1;
	    cout << x;
	
   */
   
 /*  //hw1
    int input , bang,up=100 ,down=0;
	srand(time(NULL)) ;
	bang = rand();
	bang %=98;
	bang++;
	cout << bang<<endl;
	cout <<down<<"~"<<up<<" please input : \n";
	while(input != bang) 
	{
		cin >> input;
		if(input<up && input>down)
		{
		 	
			if(input >bang)up = input; 
			else down = input;
			cout <<down<<"~"<<up<<" please input : \n";
		}
		else cout <<down<<"~"<<up<<" Invalid input : \n";
					
		
	} 
	if(input == bang)cout<<"bang";*/
    
    
    /*
    //hw2
    int a,b,c,val1,val2;
    cin>>a>>b;
  
    if(a>b)
	{
		for(int i=1;i<=b;i++)
		{
			if((a%i)==0&&(b%i)==0)
			{
				val1 =i;
			}
		}
		val2=a*b/(a-b);
	}
	else 
	{
		for(int i=1;i<=a;i++)
		{
			if((a%i)==0&&(b%i)==0)
			{
				val1 =i;
			}
		}
		val2=a*b/(b-a);
	}
    cout << "最大公因數"<<val1<<endl;
    cout << "最小公倍數"<<val2;
    */
    
 /*   //hw3
    int a ;
    cout<<"請輸入奇數列數: ";
    cin >>a ;
    for(int i=0 ; i<(a/2)+(a%2);i++ )
    {  
 		for(int j=a/2;j>i;j--)cout<<' ';
 		for(int x=1+i*2;x>0;x--)
		{
				cout<<'*';
		}
		 cout << endl;	 
	}
	for(int i=1;i<=a/2;i++)
	{
		for(int j=0;j<i;j++)cout<<' ';
		for(int x=a-(i*2);x>0;x--)
		{	
			cout<<'*';
			
		}
		cout << endl;
	}*/
	
    
}



