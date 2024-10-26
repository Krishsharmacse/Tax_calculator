#include<iostream>
using namespace std;
float simple_intrest(float principle, float rate, float time){
    return (principle * rate * time)/100;
}
int main(){
    float princliple;
    float rate;
    float time;
    cout<<"entre the principle"<<endl;
    cin>>princliple;
    cout<<"entre the rate of intrest"<<endl;
    cin>>rate;
    cout<<"entre the time for which money is borrowed"<<endl;
    cin>>time;
  
    cout<<simple_intrest(princliple,rate,time);
}