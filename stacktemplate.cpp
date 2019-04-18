#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
template<class T>
class stacker
{
	T data;
	stacker *link;
	stacker *start=NULL,*temp;
	public:
		void push();
		void pop();
		void display();
	};
	template<class T>
	void stacker<T>::push()
		{
			//temp=start;
			stacker *p=new stacker;
			if(!p)
			{
				cout<<"OVERFLOW"<<endl;
				exit(0);
			}
			
			if(start==NULL)
			{
				start=p;
				cin>>start->data;
				start->link=NULL;
			}
			else
			{
				//start=p;
				//start->link=temp;
				//temp=p;
				p->link=start;
				start=p;
				cin>>start->data;
			}
			
		}
		template<class T>
	void stacker<T>::pop()
		{
			temp=start;
			cout<<"ELEMENT POPPED IS:"<<start->data<<endl;
			start=start->link;
			free(temp);	
		}
		template<class T>
	void stacker<T>::display()
		{
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->link;
		}
			
		}

int main()
{
	try{
		int datat;
		cout<<"1.String\n2.Integer\n3.Float\nSELECT THE INPUT DATATYPE:";
		cin>>datat;
		if(datat==1)
	{
	stacker <string> a;
    }
	else if(datat==2)
	{
			stacker <int> a;
		}
	else if(datat==3)
	{
		stacker<float> a;
		}
		else
		{
			cout<<"INVALID CHOICE"<<endl;
			exit(0);
			}	
	int choice;
	while(1)
	{
	system("CLS");
	cout<<"1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nENTER YOUR CHOICE:";
	cin>>choice;
	switch(choice)
	{
		case 1:
				{
					a.push();
					
					break;
				}
		case 2:
				{
				a.pop();
				Sleep(2000);
					break;
				}
		case 3:
				{
					a.display();
					Sleep(10000);
					break;
				}
		case 4:
				{
					cout<<"THANKYOU"<<endl;
					exit(0);	
				} 
		default:
				{
					cout<<"INVALID CHOICE"<<endl;
					break;
				}
				
	}
}
}catch(exception const& ex)
{
	cerr<<"EXCEPTION:"<<ex.what()<<endl;
	return -1;
}
	return 0;
}
