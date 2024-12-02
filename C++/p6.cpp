#include <iostream>
using namespace std;

int per(int donkey,int horse) {
     return donkey + horse;
}
int main() {
  int khachar=per(80,20);
  int horsedo=per(20,80);
  
  int total=khachar+horsedo;
  
 cout << total,"\n";
  
  
  return 0;
}
// D:\4-6-batch-2024\C++>g++ p6.cpp -o main && main.exe
// 100100 concat due to string when cout not return
// D:\4-6-batch-2024\C++>g++ p6.cpp -o main && main.exe
// 200 add due to numbers when return
