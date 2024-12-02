#include <iostream>
using namespace std;

int per(int donkey,int horse) {
    return donkey + horse;
}
int main() {
  int khachar=per(80,20);
  int horsedo=per(20,80);
  
  cout << khachar<<"\n\n\n";
  cout << horsedo<<"\n";
  return 0;
}
