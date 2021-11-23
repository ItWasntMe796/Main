#include <iostream>

//declare a class to sort and display data:
class sort_data{
  //access modifiers
  public:
  void sort(int a){}
};

int main(){
  //declaring nessacary variables
  int a[4], sum = 0, ave, tmp;
  
  std::cout << "Enter 5 numbers: ";
  
  //take user input 5 times
  for (int i; i < 5; ++i) {
    std::cin >> a[i];
    //add user input
    sum = sum + a[i];
  }
  
  //display user input
  std::cout << "Your numbers: ";
  for (int i; i < 5; ++i) {
    std::cout << a[i] << "\n";
  }
  
  //display the sum of user input
  std::cout << "\n" << "Sum: " << sum;
  
  //sorting user input:
  for (int i; i < 5; ++i){
    tmp = a[i-1];
    if (tmp > a[i]){
      a[i-1] = a[i]
      a[i] = tmp;
    }
  }
  
  std::cout << "Ordered numbers";
  
  //display ordered numbers:
  for (int i; i < 5; ++i){
    std::cout << a[i] << "\n";
  }
}
