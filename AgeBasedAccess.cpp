#include<iostream>
using namespace std;
int main(){
    int myAge;
    cout<<"Enter your age";
    cin>>myAge;
    try{
        if(myAge>=18){
            cout<<"Access granted!";
        }
        else{
            throw(myAge);
        }
    }
    catch(int myAge){
        cout<<"Access Denied";}
}
/*Output
Enter age 17
Not Eligible error
*/
