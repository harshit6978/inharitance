#include<iostream>

using namespace std;

class p{
	public:
			float c,fah;
		
		void celsuis(){
		
	
			cout<<"enter a celcuis:-";
			cin>>c;
		
			fah= (c * 9/5) + 32;
			
			cout<<" fahrenheit is a:-"<<fah<<endl;	
		
		}
};

class q : public p{
	
	public:
		int kelvin;
		
		void fahrenheit(){
			cout<<"enter a  fahrenheit:-";
		cin>>kelvin;
		
		kelvin = (fah - 32) * 5/9 +273.15;
		
		cout<<"kelvin is a:"<<kelvin;
		}
		
	
};

class r : public q {
	
	public:
		int k;
		
		void kelvin(){
		cout<<"enter a kelvin:;-";
		cin>>k;
		
		k=kelvin-273.15;
		
		cout<<"kelvin is a:"<<k;	
			
		}
		
	
	
};

int main(){
	
	r obj;
	obj.celsuis();
	obj.fahrenheit();
	obj.kelvin();;
	
	
	return 0;
}
