#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Storage{
private:
  T data[5];
  int size = 0;
public:
  void Add(T value){
    if(size < 5){
      data[size] = value;
      size++;
    }
  }
  void Print(){
    for(int i = 0; i < size; i++){
      cout << data[i] << endl;
    }
  }
  T GetLargest(){
    T largest = data[0];
    for(int i = 1; i < size; i++){
      if(data[i] > largest){
        largest = data[i];
      }
    }
    return largest;
  }
};
template <typename T>
void Printtwice(T value){
  cout << value << endl;
  cout << value << endl;
}
int main(){
  Storage<int> numbers;
  numbers.Add(5);
  numbers.Add(20);
  numbers.Add(10);
  cout << "Numbers: " << endl;
  numbers.Print();
  cout << "Largest: " << endl;
  cout << numbers.GetLargest() << endl;
  Storage<string> names;
  names.Add("Rahul");
  names.Add("Deep");
  names.Add("Zigyash");
  cout << "Names: " << endl;
  names.Print();
  cout << endl;
  Printtwice("Bruh");
}
