#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool checkmanipal_email(string str){
    int pos=str.find("@");
    string s=str.substr(pos);
    if(s=="@manipal.edu")
      return true;
    return false;
}
bool checkgmail_email(string str){
    int pos=str.find("@");
    string s=str.substr(pos);
    if(s=="@gmail.com")
      return true;
    return false;
}
int main(){
	string str,str1;
	int count=0;
	ofstream out_file("email_ids.txt");
	while(1){
		cout<<"enter your email and press -1 for exit"<<endl;
		getline(cin,str);
		if(str=="-1")
		  break;
		out_file<<str<<endl;
	}
	out_file.close();
	ifstream email("email_ids.txt");
	ofstream out_file1("manipal_id.txt");
	while(	getline(email,str1)){
	   if(checkmanipal_email(str1))
	  {
	  	  count++;
	  	  out_file1<<str1<<endl;
	  }
	    
		}
		
		email.close();
		out_file1.close();
		cout<<"no of email ending with manipal.edu: "<<count<<endl;
		count=0;
	ifstream email1("email_ids.txt");
	ofstream out_file2("gmail_id.txt");
	while(	getline(email1,str1)){
	   if(checkgmail_email(str1))
	  {
	  	  count++;
	  	  out_file2<<str1<<endl;
	  }
	    
		}
		email1.close();
		out_file2.close();
	cout<<"no of email ending with gmail.com: "<<count<<endl;
	return 0;
}