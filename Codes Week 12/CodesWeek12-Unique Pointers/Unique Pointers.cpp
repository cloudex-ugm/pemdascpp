#include <iostream>
#include <memory>
using namespace std;

class srcPizza
    {
    public:
        // Constructor.
        srcPizza()
            { cout << "Full pizza. :) (Constructor)\n"; }
            
        // Destructor
        ~srcPizza()
            { cout << "Pizza is gone. :( (Destructor)\n"; }
    };

void DoStuff()
    {
    //////////////////////////////////////////////////////
    // Declare a unique pointer like this:
    unique_ptr<int> srcUP(new int(42));
    // The constructor takes a pointer to the object is.
    
    // You can dereference the unique pointer like a normal pointer.
    cout << *srcUP << endl;
    //////////////////////////////////////////////////////
    
    
    //////////////////////////////////////////////////////
    // DO NOT pass a raw pointer as the constructor. 
    int* rawPtr = new int(52);
    unique_ptr<int> srcUP2(rawPtr);
    // ^ BAD. It works, but it's bad practice. 
    // Always use the new keyword inside of the unique pointer constructor.
    
    cout << *srcUP2 << endl;
    //////////////////////////////////////////////////////
    
    
    //////////////////////////////////////////////////////
    // In C++14, you can use make_unique instead of the new keyword.
    unique_ptr<int> srcUP3 = make_unique<int>(62);
    // It's safer. (Sort of.)
    
    cout << *srcUP3 << endl;
    //////////////////////////////////////////////////////
    
    
    //////////////////////////////////////////////////////
    // The destructor of an object is called when the unique pointer is deleted.
    unique_ptr<srcPizza> srcUP4(new srcPizza());    
    } // srcUP4 gets deleted here, so the destructor of the srcPizza is called.
    //////////////////////////////////////////////////////
    
    
int main()
    {
    cout << "Program started." << endl;
    DoStuff();
    cout << "Program finished." << endl;
    return 0;
    } 