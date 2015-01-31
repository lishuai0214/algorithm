#include <stack>  
#include <iostream>  
      
using namespace std;  
      
int main() {  
stack<int> intStack;  

for(int i=0; i < 10 ;i++ )
{
   intStack.push(i);  
}
  
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
