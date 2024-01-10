#include<iostream>
using namespace std;
class Result{
	private:
		int rollno;
		char name[50];
		float marks[3];
		static int n;
		public:
//			Result(){
//				n++;
//			}
			void input(){
				cout<<"Enter roll number ";
				cin>>rollno;
				cout<<"Enter Name ";
				cin>>name;
				for(int i=0;i<3;i++){
					cout<<"enter your marks ";
					cin>>marks[i];
					n++;
					}
					
				}
				
				void show(){
					cout<<"Roll No is "<<rollno<<endl;
					cout<<"Name is "<<name<<endl;
					for(int i=0;i<3;i++)
					cout<<"enter marks of subject "<<marks[i]<<endl;
					cout<<"number of subjects "<<n;
				}
				int total(){
					float t=0;
					for(int i=0;i<3;i++)
						t=t+marks[i];
						return t;
					
				}
				int avg(){
					float t=0;
					for(int i=0;i<3;i++)
						t=t+marks[i];
						return t/3.0;
				
			}
};
int Result::n=0;
int main(){
	Result r1;
	r1.input();
	r1.show();
	cout<<"\nTotal marks is "<<r1.total();
	cout<<"\nAverage marks is "<<r1.avg();
}
