#include <stack>  
#include <iostream>  
      
using namespace std;  
      
int main() {  
stack<int> intStack;  
intStack.push(16);  
intStack.push(8);  
intStack.push(20);  
intStack.push(3);  
  
cout << "top of intStack:" << intStack.top() << endl;  
intStack.pop();  
cout << "top of intStack:" << intStack.top() << endl;  
while(!intStack.empty()) {  
      cout << intStack.top() << " ";  
      intStack.pop();  
}  
     
cout << endl;  
    return 0;  
    }  
