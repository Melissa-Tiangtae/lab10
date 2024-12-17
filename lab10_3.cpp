#include <iostream>
#include <iomanip>
#include<cmath>
#include<fstream>
using namespace std;

int main(){
    int count = 0;
    float deviation,sum=0,sum_sq=0,mean;
    ifstream source;
    ofstream dest;
    string text;
    source.open ("score.txt");
    dest.open ("lab10_3.cpp");

    while(getline(source,text)){

        sum_sq += pow(stof(text),2);
        sum += stof(text);
        count ++;
    }

    mean = sum/count;
   deviation = pow((((1.0/count)*sum_sq)-pow(mean,2)),0.5);

    cout << "Number of data = " << count <<endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
   cout << "Standard deviation = " << deviation ;
}