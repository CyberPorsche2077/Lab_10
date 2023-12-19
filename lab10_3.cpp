#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){
    int count=0;
    double mean=0,deviation=0,sum=0,sumpow2;
    string textline;
    ifstream source;
    source.open("score.txt");
    while (getline(source,textline))
    {
        sum+= atof(textline.c_str());
        sumpow2+= pow(atof(textline.c_str()),2.0);
        count++;
    }
    mean=sum/count;
    deviation=sqrt((sumpow2/count)-pow(sum/count,2.0));
    source.close();

    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean <<"\n";
    cout << setprecision(3);
    cout << "Standard deviation = "<< deviation <<"\n";
}