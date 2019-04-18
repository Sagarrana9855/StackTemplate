#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
class node
{
	int data;
	node *link;
	node *start=NULL,*temp;
	public:
		void push()
		{
			//temp=start;
			node *p=new node;
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
	void pop()
		{
			temp=start;
			cout<<"ELEMENT POPPED IS:"<<start->data<<endl;
			start=start->link;
			free(temp);	
		}
		void display()
		{
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->link;
		}
			
		}
};
int main()
{
	node a;
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
	return 0;
}
