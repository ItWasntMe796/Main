#include <iostream>

int main(){
  //declaring nessacary variables
  int a[4], sum = 0, ave, tmp;
  
  std::cout << "Enter 5 numbers: ";
  
  //take user input 5 times
  for (int i; i < 5; ++i) {
    std::cin >> a[i];
    //add user input
  }
  
  //display user input
  std::cout << "\nYour numbers: \n";
  for (int i; i < 5; ++i) {
    std::cout << "  " << a[i] << "\n";
    sum = sum + a[i];
  }
  
  //sorting user input:
  for (int i; i < 5; ++i){
    tmp = a[i-1];
    if (tmp > a[i]){
      a[i-1] = a[i];
      a[i] = tmp;
    }
  }
  
  std::cout << "\nOrdered numbers\n";
  
  //display ordered numbers:
  for (int i; i < 5; ++i){
    std::cout << "  " << a[i] << "\n";
  }
  
  return 0;
}
