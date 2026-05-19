#include <iostream>
#include <string>
using namespace std;
class Entity{
  private:
  string m_Name;
  public:
  Entity(const string& name)
    : m_Name(name){
      cout << m_Name << " Created" << endl;
    }
  ~Entity(){
    cout << m_Name << " Destroyed" << endl;
  }
};

void Function(){
  Entity local("Local");
  Entity* heap = new Entity("Heap");
  delete heap;
}
int main() {
  Entity mainObj("Main");
  Function();
  cout << " Back in main" << endl;
}
