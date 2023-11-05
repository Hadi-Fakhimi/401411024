#include <iostream>
using namespace std;

class Account
{
    public:
    Account(string cName , int cAge, int balance){
        
        name = cName;
        age = cAge;
    }
    string GetName(){

        return name;
    }
    int GetBalance(){
        return balance;
    }
    private:
        string name;
        int age;
        int balance;
   
    

};

int main(){

    Account account1("hadi",50,1000),account2("shahrooz",60,2000);

    cout << "the balance of account : " << account1.GetName() << "is " << account1.GetBalance();
    cout << "the balance of account : " << account2.GetName() << "is " << account2.GetBalance();
}