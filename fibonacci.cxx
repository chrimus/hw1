#include <iostream>

int main(){
  std::cout << "Which fibonacci number you want to know? Please enter an integer starting with 0:\n";
  int n;
  std::cin >> n;
  
  int res= 1;
  if (n==0) res=0;
  else if (n==1) res= 1;
  
  int fib_0=0;
  int fib_1=1;
  
  for(int i=1; i<n; i++){
    //calculate (i+1).th fibonacci number
    res= fib_1 + fib_0;
    
    //give the i.th and i-1.th fibacci number the right value (go one step further)
    fib_0= fib_1;
    fib_1= res;
  }   
  
  
  std::cout << "The " << n << ".th fibonacci number is: " << res << std::endl;
  return 0;
}
