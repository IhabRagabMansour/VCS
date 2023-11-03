#include <iostream>
#include <vector>

using namespace std;

int getSum(const vector<int> &vec);
float getAvrage(const vector<int> &vec);

int main(){ 

vector<int> vec={1,2,3,4,5,6,7,8,9,10};
int sum = getSum(vec);
cout<<"The sum of the Vector = "<<sum<<endl;
int avg = getAvrage(vec);
cout<<"The average of the Vector = "<<avg<<endl;

return 0;
}

int getSum(const vector<int> &vec){
    int sum=0;
    for(int number : vec){
        sum+=number;
    }
    return sum;
}

float getAvrage(const vector<int> &vec){

    int sum=getSum(vec);
    float avg=(float)sum/vec.size();

    return avg;
}