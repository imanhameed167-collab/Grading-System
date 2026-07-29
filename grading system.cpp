#include<iostream>
using namespace std;
int main(){
	char name[20];
	int roll_no,cls,t_marks,sub1,sub2,sub3,sub4,sub5,sub6,obt_m;
	float avg;
	cout<<"Enter your name:";
	cin>>name;
	
	cout<<"Enter your class:";
	cin>>cls;
	
	cout<<"Enter your roll no:";
	cin>>roll_no;
	
	cout<<"Enter Total marks of 6 subjects:";
	cin>>t_marks;
	
	cout<<"Enter marks of subject 1=";
	cin>>sub1; 
	
	cout<<"Enter marks of subject 2=";
	cin>>sub2;
	
	cout<<"Enter marks of subject 3=";
	cin>>sub3;  
	
	cout<<"Enter marks of subject 4=";
	cin>>sub4; 
	
	cout<<"Enter marks of subject 5=";
	cin>>sub5; 
	
	cout<<"Enter marks of subject 6=";
	cin>>sub6; 
	
	obt_m=sub1+sub2+sub3+sub4+sub5+sub6;
	cout<<"obtained marks="<<obt_m<<endl;
	
	avg=(obt_m*100.0/t_marks);
	cout<<"average marks"<<avg<<endl;
	
	if (avg>100)
	  cout<<"wrong entry";
	else if (avg>=80)
	  cout<<"Grade A";
	else if (avg>=70)
	  cout<<"Grade B";
	else if (avg>=60)
	  cout<<"Grade C";
	else if (avg>=50)
	  cout<<"Grade D";
	else if (avg>=40)
	  cout<<"Grade E";
	else 
	  cout<<"Fail";
	return 0;
	
}
