#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,int>p={3,5};
    cout<<p.first<<p.second<<endl;//35

    pair<int,string>p2={5,"hey"};
    cout<<p2.first<<p2.second<<endl;//5hey

    pair<int,int> arr[]={{1,2},{4,5},{8,20}};
    cout<<arr[1].first<<arr[0].second<<endl;//42

    //vector is similar to array ,but its dyanamic meaning size could be increased
    vector<int>v;//{}
    v.push_back(4);//{4}
    v.push_back(3);//{4,3}
    v.emplace_back(6);//{4,3,6} its similar to push_back but faster

    vector<int>v2(5,90);//{90,90,90,90,90}
    vector<int>v3(5);//{0,0,0,0,0,}
    
    vector<int>::iterator it=v.begin();//v.begin gives address of first element
    cout<< *(it)<<endl;//4
    it++;
    cout<<*(it)<<endl;//3

    vector<int>::iterator itl=v.end();//this points to next after last so -- is needed
    itl--;
    cout<<*itl<<endl;

    for(auto itr=v.begin();itr!=v.end();itr++){
        cout<<*itr;//436
    }
    //v.erase(address)
    //v.erase(address,address) [ }
    //v.insert(address,value)
    //v.insert(address,count,value)
    v.insert(v.begin()+1,10);//4 10 3 6
    vector<int>copy(3,40);//{40,40,40}
    v.insert(v.begin(),copy.begin(),copy.end());//40 40 40 4 10 3 6
    cout<<v.size();
    v.pop_back();
    v.clear();
    //v1.swap(v2);will swap 
    //v.empty()return in true or false
    return 0;
}