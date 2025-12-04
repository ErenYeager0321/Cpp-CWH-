#include<iostream>
using namespace std;
 
int c = 40;

int main(){
    // *****Built-in data types in c++******
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;// to access global variable we use scope resolution operator ::  
   
    //float d = 34.4;
    //long double e = 34.4;
    //if we ask the compiler which is float or double he will say its double but if we write like that 34.4f than he will recognise and we can aslo write 34.4l(long double)
   
    //***** literals****** 
    // float d = 34.4F;
    // long double e = 34.4L;
    // cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<endl;

    // *****reference variables******
    // float x = 455;
    // float & y = x; //reference variable y is another name for x
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *****typecasting******
    int a = 45;
    float b = 45.46;

    cout<<"the value of a is "<<(float)a<<endl;//converting int to float
    cout<<"the value of a is "<<float(a)<<endl;//both are same

    cout<<"the value of b is "<<(int)b<<endl;//converts float to int
    cout<<"the value of b is "<<int(b)<<endl;//both are same can write only ine too

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    return 0; 
}