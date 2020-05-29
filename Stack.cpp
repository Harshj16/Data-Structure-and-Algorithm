//stack DS
#include<iostream>
#include<string>
using namespace std;
class stack
{
	private:
		int top;
		int arr[5];
	public:
		stack()
		{
			top = -1;//stack is empty
			for(int i = 0;i<5;i++)
			{
				arr[i] = 0;//everything under array is zero
			}	
		}
		bool isEmpty()
		{
			if(top == -1)
				return true;
			else
				return false;
		}
		bool isFull()
		{
			if(top == 4)
				return true;
			else
				return false;
		}
		void push(int val)
		{
			if (isFull())
			{
				cout<<"Stack Overflow"<<endl;
			}
			else
			{
				top++;
				arr[top] = val;
			}
		}
		int pop()
		{
			if (isEmpty())
			{
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else
			{
				int popval = arr[top];
				arr[top] = 0;
				top--;
				return popval;
			}
		}
		int count()
		{
			return (top+1);
		}
		int peek(int pos)
		{
			if (isEmpty())
			{
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
			}
		}
		void change(int pos , int val)
		{
			arr[pos] = val;
			cout<<"value changed at location "<<pos<<" for value "<<val<<endl;
		}
		void disp()
		{
			cout<<"Stack values are : "<<endl;
			for(int i = 4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
};
int main()
{
	stack s1;
	int position,option,value;
	do
	{
		cout<<"Enter your option choice : "<<endl;
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. disp()"<<endl;
		cout<<"9. clearscreen"<<endl;
		cout<<"Press 0 to exit :)"<<endl;
		cin>>option;
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"Enter val to push"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"pop function called"<<endl;
				s1.pop();
				break;
			case 3:
				if (s1.isEmpty())
					cout<<"Stack is empty"<<endl;
				else
					cout<<"Stack is not empty"<<endl;
				break;
			case 4:
				if (s1.isFull())
					cout<<"Stack is Full"<<endl;
				else
					cout<<"Stack is not Full"<<endl;
				break;
			case 5:
				cout<<"Enter pos you want to peek : "<<endl;
				cin>>position;
				cout<<"peek function called at position "<<position<<" is "<<endl<<s1.peek(position)<<endl;
				break;
			case 6:
				cout<<"Count function called \n Number of items in stack are : "<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Change function called : "<<endl;
				cout<<"Enter pos on which you want changes : ";
				cin>>position;
				cout<<endl;
				cout<<"Enter val you want to change : "<<endl;
				cin>>value;
				s1.change(position , value);
				break;
			case 8:
				cout<<"Displaying stack"<<endl;
				s1.disp();
				break;
			case 9:
				system("cls");
				break;
			default: 
				cout<<"Enter number between 0-9"<<endl;
				break;
				
			
				
		}
	}while(option!=0);	
}
