#include "iostream"
using namespace std;


int main(){

    float a,alpha,atest;

    cout << "please insert a number: ";
    cin >> a;
    alpha =a;

    for(int cnt =0 ; cnt<5; cnt++){

        atest = alpha*alpha;
        cout << " approximation of sqrt : " << a << "in itration" << cnt << "is" << atest;
        alpha = alpha/2 + a/(2*alpha);
    }

    cout << "the sqrt of: " << a << " is: " << alpha;

    atest = alpha*alpha;
    cout << "\n alpha ^2 is: " << atest;




    return 0;
}