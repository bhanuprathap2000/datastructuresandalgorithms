//when we seperate the class into a seperate header file then we can reuse them in many places but including the header file
//generarly we seperate the specificaion and implmenetation but here we have combined.
//we can use the c++ templates by which we will be able to pass the data type as parameter

//this data type is dtermined by the data passed while calling the function or creating an object of the class we need to pass datatype in<>
template<typename T>
class Vector{

//these attributes are private
    T *arr;//pointer to store the address of the dynamic array
    int currentSize;//current size
    int maximumSize;//maximum size
public:
    Vector(int max=1){
         currentSize = 0;
         maximumSize = max;
         arr = new T[maximumSize];
    }
//this push_back method has to do two things if size of the vector is full then 
//create a new dynamic array of the double the size of current array and copy the old elements and delete the older array
//cannot be constant as it chnages the attributes

    void push_back(T element){
        //two cases
        if(currentSize==maximumSize){
            //if array reached it's maximum size
            maximumSize = 2 * maximumSize;
            int *oldArr=arr;
            arr = new T[maximumSize];//allocate a dynamic integer array of size maximumSize in the heap.
//copying the old elements to the new array
            for (int i; i < currentSize;i++){
                arr[i] = oldArr[i];
            }
            delete[] oldArr;
        }
        arr[currentSize] = element;
        currentSize++;

    }

//cannot be constant as it chnages the attributes
    T pop_back(){
        if(currentSize>=0){
            return arr[currentSize];
        }
    }

    bool isEmpty() const{
        return currentSize == 0;
    }

    T front() const{
        return arr[0];
    }
    T back() const{
        return arr[currentSize - 1];
    }
    T at(const T i) const{
        return arr[i];
    }
    int size() const{
        return currentSize;
    }
    int capacity() const{
        return maximumSize;
    }
    //this is operator overloading when we use the [] along with object of this clas v[] then this function will be called.ideally this function returns value only so let's make the function const
    T operator[](const T i) const{ //i value should not chnage the i and function cannot chnage any class attributes.
        return arr[i];
    }
};