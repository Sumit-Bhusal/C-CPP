#include<iostream>
#include<string>
using namespace std;
class String{
    char String[20];
public:
string(){}
void getstring(){
    cout<<"enter string:";
    cin>>str;
}
String(char str1[20]){
    strcpy(str,str1);
}
String operator+(String s){
    char temp[20];
    strcat(str,s,str);
    strcpy(temp,str);
    return temp;
}
void displaystring(){
    cout<<"string="<<str<<endl;
}
};
int main(){
    String s1("hello"),s2("bro"),s3;
    s3=s1+s2;
    s3.displaystring();
    return 0;
}




    
