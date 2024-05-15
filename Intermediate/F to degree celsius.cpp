#include<iostream>
using namespace std;
class Fahrenheit{
    int f;
    public:
    int getf(){
        return f;
    }
    friend void operator>>(istream &in,Fahrenheit &fa){
        cout<<"Enter temperature in fahrenheit: ";
        in>>fa.f;
    }
    friend void operator<<(ostream &out, Fahrenheit &fa){
        out<<fa.f;
}};
class Celsius{
    int c;
    public:
    friend void operator>>(istream &in,Celsius &ce){
        cout<<"Enter temperature in celsius: ";
        in>>ce.c; 
    }
    friend void operator<<(ostream &out, Celsius &ce){
        out<<"Temperatre="<<ce.c;
    }
    float conversion(Fahrenheit fah){
        float ans;
        ans=(fah.getf()-32)*(5/9.0);
        return ans;        
    }
};

int main()
{
    Fahrenheit f1;
    cin>>f1;
    Celsius c1;
    cin>>c1;
    float ans=c1.conversion(f1);
    cout<<f1;
    cout<<" is "<<ans<<" in degree celsius"<<endl;
    return 0;
}
