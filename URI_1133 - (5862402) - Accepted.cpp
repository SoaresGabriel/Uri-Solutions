#include <iostream>

using namespace std;

int main() {

   int x, y;

   cin >> x >> y;

   if(x > y){
      int aux = x;
      x = y;
      y = aux;
   }

   for(x++; x < y; x++){
        if(x % 5 == 2 ||x % 5 == 3)
            cout << x << endl;
   }

    return 0;
}
