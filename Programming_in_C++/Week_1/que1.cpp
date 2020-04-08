#include <iostream>

#include <algorithm>

using namespace std;


void find_and_replace(int *data, int n, int key) {

    int new_val = -1;
      for(int j = 0; j < n; j++)
    { if( data[j] == key )
       data[j] = new_val;    
  }

  }
    
    int main() {
    int data[5], key;

    for (int i = 0; i < 5; i++)
        cin >> data[i];
    cin >> key;

    find_and_replace(data, 5, key);

    for (int i = 0; i < 5; i++)
        cout << ' ' << data[i];
    cout << '\n';

    return 0;
}
