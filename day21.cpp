
#include <iostream> 
#include <memory>
using namespace std;
class Player{
  private:
  int health;
  public:
  Player(int h)
  : health(h){
    cout << "Player Created" << endl;
  }
  ~Player(){
    cout << "PLayer Destroyed" << endl;
  }
  void Print(){
    cout << "Health: " << health << endl;
  }
};
int main(){
  unique_ptr<Player> p = make_unique<Player>(100);
  p->Print();
}



#include <iostream>
#include <memory>

using namespace std;

class Entity{
public:

    Entity(){

        cout << "Created"
             << endl;
    }

    ~Entity(){

        cout << "Destroyed"
             << endl;
    }
};

int main(){

    shared_ptr<Entity> e1 =
        make_shared<Entity>();

    shared_ptr<Entity> e2 = e1;
}




#include <iostream>
#include <memory>
using namespace std;
class Entity{
public:
  Entity(){
    cout << "created" << endl;
  }
  ~Entity(){
    cout << "Destroyed" << endl;
  }
};
int main (){
  shared_ptr<Entity> shared = make_shared<Entity>();
  weak_ptr<Entity> weak = shared;
  cout << shared.use_count() << endl;
}
