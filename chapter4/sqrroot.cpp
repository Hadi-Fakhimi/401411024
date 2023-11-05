#include "iostream"
using namespace std;


int main(){

    float a,alpha,atest;

    cout << "please insert a number: ";
    cin >> a;
    alpha =a;

    while(abs(atest-a) ){

        atest = alpha*alpha;
        cout << " approximation of sqrt : " << a << "in itration" << "is" << atest;
        alpha = alpha/2 + a/(2*alpha);
    }

    cout << "the sqrt of: " << a << " is: " << alpha;

    atest = alpha*alpha;
    cout << "\n alpha ^2 is: " << atest;




    return 0;
}