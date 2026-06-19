#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printlist(list<int>li){
  list<int>::iterator itr;
for(itr=li.begin();itr!=li.end();itr++){
    cout<<(*itr)<<"->";
}
cout<<endl;
  }
int main(){
    list<int>li;
    li.push_front(2);
    li.push_front(1);//1->2

    li.push_back(3);//1->2->3
    li.push_back(4);//1->2->3->4

}