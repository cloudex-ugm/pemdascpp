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
    //////////////////////////////////////////////////
    // Declare a shared pointer like this:
    shared_ptr<int> srcSP(new int(42));
    // The constructor takes a pointer to the object is.
    
    // You can make another pointer point to the same thing.
    shared_ptr<int> srcSP2 = srcSP;
    
    // You can dereference the shared pointer like a normal pointer.
    cout << *srcSP << endl;
    cout << *srcSP2 << endl;
    //////////////////////////////////////////////////
    
    
    //////////////////////////////////////////////////
    // Let's make a sharedPtr to an object.
    shared_ptr<srcPizza> srcSP3(new srcPizza());
    cout << "Constructor should have been called already.\n";
    shared_ptr<srcPizza> srcSP4 = srcSP3;
    
    // Reset will make the pointer not point to the object anymore.
    srcSP3.reset();
    cout << "SP3 no longer points to the pizza.\n";
    // But since SP4 still points to it, the object is alive. If we reset SP4, then the object is deleted, since no pointers point to it anymore.
    cout << "Resetting SP4.\n";
    srcSP4.reset();
    cout << "The destructor will have been called.\n";
    //////////////////////////////////////////////////
    
    
    //////////////////////////////////////////////////
    // The destructor of an object is called when the shared pointer goes out of scope.
    shared_ptr<srcPizza> srcSP5(new srcPizza());
    cout << "Going out of scope.\n";    
    } // srcSP5 gets deleted here, so the destructor of the srcPizza is called.
    //////////////////////////////////////////////////
    
    
int main()
    {
    cout << "Program started." << endl;
    DoStuff();
    cout << "Program finished." << endl;
    return 0;
    } 