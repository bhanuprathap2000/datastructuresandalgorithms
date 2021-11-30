#include <vector>
using namespace std;
template <typename T>//this is a template in order to be generic
//we can create a stack of any data type
class Stack{
//when we create a stack we need to create a vector of T data type
    vector<T> arr;

    public:
    //push function to push the elements we use the push_back function of vector
    void push(T data){

        arr.push_back(data);

    }
//pop function to pop the elements we use the pop_back function of vector
    void pop(){
        arr.pop_back();
    }
//top function to return the top element of the stack
    T top(){
        return arr.back();//we can use this function or arr[arr.size()-1]
    }
//empty function to check if the stack is empty or not
    bool empty(){
        return arr.size() == 0;
    }
};