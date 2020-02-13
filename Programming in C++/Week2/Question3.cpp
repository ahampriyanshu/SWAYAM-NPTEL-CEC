#include <iostream>

using namespace std;

int sum(){
  
  return 0;
}

int sum(int a){
  
  return a;
}

int sum(int a, int b){
  
  return a+b;
}


int sum(int a, int b , int c) {   
return a + b + c;
}

int main() {
    int i, j, k;
    cin >> i >> j >> k;

    cout << sum() << ", ";
    cout << sum(i) << ", ";
    cout << sum(i, j) << ", ";
    cout << sum(i, j, k);

    return 0;
}
