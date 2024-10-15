#include <iostream>
using namespace std;
void greeting(){
    cout<<"Please Select Oparetion"<<endl;
    cout<<"1.Sum Tow Number"<<endl;
    cout<<"2.Substring Oparetion"<<endl;
    cout<<"3.Multiply Oparetion"<<endl;
    cout<<"4.Divide Oparetion"<<endl;
}
void sum(float a, float b){
    cout<<"Your Result: "<<a+b<<endl;
}
void sub(float a, float b){
     cout<<"Your Result: "<<a-b<<endl;
}
void multi(float a, float b){
    cout<<"Your Result: "<<a*b<<endl;
}
void divide(float a, float b){
    if(b != 0){
        cout<<"Your Result: "<<a/b<<endl;
    }else{
        cout<<"can't Divide 0"<<endl;
    }
}
int main() {
    greeting();
    int oparetion;
    cin>>oparetion;
    
    float a,b;
    cout<<"Enter tow Number: ";
    cin>>a>>b;
    
    switch(oparetion){
      case 1:
        sum(a,b);
        break;
      case 2:
        sub(a,b);
        break;
      case 3:
        multi(a,b);
        break;
     case 4:
        divide(a,b);
        break;
      default:
        cout<<"nothing";
    }
    return 0;
}
