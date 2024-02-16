#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>ls;//{}
    ls.push_back(4);//{4}
    ls.emplace_back(5);//{4,5}
    ls.push_front(3);//{3,4,5}
    for(auto i=ls.begin();i!=ls.end();i++){
        cout<<*i;
    }
    return 0;
    //dequeue is also the same 
}