#include<iostream>
using namespace std;

int main(){
    int data, a, b,c;
    cout<<"welcome To Our Calcultor!"<<endl;
    cout<<"Press 1. Addition"<<endl;
    cout<<"Press 2. Subtraction"<<endl;
    cout<<"Press 3. Multiplication"<<endl;
    cout<<"Press 4. Division"<<endl;

    cout<<"Choose Your wish: ";
    cin>>data;

    cout<<"Enter the 1st number:-";
    cin>>a;
    cout<<"Enter the 2nd number:-";
    cin>>b;


    switch (data)
    {
    case 1:
        c = a+b;
        cout<<"Addition of ("<<a<<", "<<b<<") :-  "<< c <<endl;
        break;
    case 2:
        c = a-b;
        cout<<"Subtraction of ("<<a<<", "<<b<<") :-  "<< c <<endl;
        break;
    case 3:
        c = a*b;
        cout<<"Multiplication of ("<<a<<", "<<b<<") :-  "<< c <<endl;
        break;
    case 4:
        c = a/b;
        cout<<"Division of ("<<a<<", "<<b<<") :-  "<< c <<endl;
        break;
    
    default:
        cout<<"Invalid choose"<<endl;
        break;
    }



    return 0;
}