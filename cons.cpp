#include<iostream>
using namespace std;
class Humanbeing{
	public:
		string name;
		int age;
		Humanbeing(){
			name="no name";
			age=0;
		}
		Humanbeing(string word,int val){
			name=word;
			age=val;
		}
		Humanbeing(string word){
			name=word;
			age=0;
		}
		Humanbeing(int val){
			name="no name";
			age=val;
		}
		Humanbeing(Humanbeing &Vivek){
			name=Vivek.name;
			age=Vivek.age;
		}
		void display()
		{
			cout<<name<<" "<<age<<endl;
		}
};
int main(){
	Humanbeing a;
	a.display();
	Humanbeing b("Vivek",18);
	b.display();
	Humanbeing c("vivek");
	c.display();
	Humanbeing d(18);
	d.display();
	
}
