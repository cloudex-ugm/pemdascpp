#include <iostream>
#include <stdexcept>
using namespace std;

void MemoryLeak()
    {
    int* srcmake = new int(42);
    cout << "Allocated a new variable on the heap." << endl;
    
    // Then, what if an exception occurs?
    throw std::invalid_argument("This function ends on this line.");
    
    cout << "We never get to this line of code!" << endl;
    
    // The 'srcmake' int is still on the heap, and won't be removed from RAM. This is a memory leak.
    delete srcmake;
    }

int main()
    {
    // Call the MemoryLeak function. It can throw exceptions, so put it in a try catch.
    try
        {
        MemoryLeak();
        }
    catch(const std::invalid_argument& e)
        {
        
        }
    
    cout << "Program finished." << endl;
    return 0;
    }