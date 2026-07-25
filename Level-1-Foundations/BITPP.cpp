#include <iostream>
#include <set>

using namespace std;

int main()
{
set<int>numbers={ 20, 50, 70, 30 , 90};


for(int i : numbers){
    cout<<i<<endl;
}

 numbers.insert(80);
 cout << numbers.erase(30);
 cout<<"after we add"<<endl;

for(int i : numbers){
    cout<<" " << i<<endl;
}
    return 0;
}
