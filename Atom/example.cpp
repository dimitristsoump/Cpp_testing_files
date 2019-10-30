#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
  int num, dumy;
  vector<int> list;
  //string a="hsbv";
  cout << "Give number of elements " << "\t";
  cin >> num ;
  for (int i=0;i<=num-1;i++){
    //cout <<"it works" <<endl;
    cin >> dumy ;
    list.push_back(dumy);
    cout << list[i] <<endl;
  }
  //int num ;
  //cin >> num >>endl;
  cout <<"Hello world" <<endl;
  return 0;
}
