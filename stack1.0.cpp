#include <iostream>
#include<conio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class stack {
	int stk[5];
	int top;
	public:
		stack()
		{top = -1 ;
		}
		void push(int x)
		{
			if(top>4)
			{ 
			    cout <<"Ust tasma hatasi";
			     return;
			}
			stk[++top]=x;
			cout<<"eklendi"<<x;
		}
		void pop()
		{
		if(top<0){
			cout<<"Alt tasma hatasi";
			return;
		}
		cout<<"Silindi"<<stk[top--];		
		}
		
		void display()
		{
			if(top<0)
			{
				cout<<"Y�g�n bos";
				return;
				
			}
			for(int i = top;i>=0;i--)
			cout<<stk[i]<<" ";
		}
};
int main(int argc, char** argv) {
	
	int ch;
	stack st;
	while(1)
	{
		cout<<"\n 1.push 2.pop 3.G�ster 4.Sonlandir \nSeciminizi Giriniz: ";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Eklenecek eleman?:";
			cin>>ch;
			st.push(ch);
			break;
			case 2: st.pop(); break;
			case 3: st.display(); break;
			case 4: exit(0);
		}
	}
	
	
	return 0;
}
