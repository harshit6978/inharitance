#include<iostream>

using namespace std;

class x{
	
	public:
		void xx(){
			int a,b,c;
		}
	
};

class y : public x{
	
	public:
		
		int a,b,c; 
		
		
		void setter(){
			
			cout<<"enter a value";
			cin>>a;
			
			cout<<"enter b value";
			cin>>b;
			
			cout<<"enter c value";
			cin>>c;
			
		
		}
		void getter(){
		
			cout<<"a"<<a<<endl;
			cout<<"b"<<b<<endl;
			cout<<"c"<<c<<endl;
			
		}
};

int main(){
	
	y obj;
	
	obj.xx();
	obj.setter();
	obj.getter();
	
	return 0;
}
