#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

/*
As we have discussed earlier, Iterators are used to point to the containers in STL,
 because of iterators it is possible for an algorithm to manipulate different types of data structures/Containers.

Algorithms in STL don’t work on containers, instead they work on iterators,
 they manipulate the data pointed by the iterators. Thus it doesn’'t matter 
 what is the type of the container and because of this an algorithm will work 
 for any type of element and we don't have to define same algorithm for different types of containers.

syntax for an iterator is 
containertype<datatype>::iterator iterator_name;
or simple one auto iterator_name=container_name.begin();//here compiler will take care of the datatype


*/

int main(){

    vector<int>::iterator it;
    //it is a iterator for vector of integeres.

    vector<string>::iterator it1;
    //it1 is a iterator for vector of strings.

    list <int>::iterator it2;
    //it2 is a iterator for list of integeres.

    map<int,string>::iterator it3;
    //it3 is a iterator for map of integeres and strings.

    vector<int> v(10);
    //vector of 10 integers
    //we can iterate through the vector container using the iterators
    //v.beign() is the iterator pointing to the first element of the vector
    //v.end() is the iterator pointing to the imaginary element after  last element of the vector
    //we can use the auto keyword instead of long syntax
    for (auto it = v.begin(); it != v.end();it++){

        cout << *it << endl;//using dereferance operator to print the value of the iterator
    }

        return 0;
}

/*
advance() Operation
It will increment the iterator i by the value of the distance. If the value of distance is negative, then iterator will be decremented.
vector<int>  v(10) ;    // create a vector of 10 0's
    vector<int>::iterator i;  // defines an iterator i to the vector of integers
    
    i = v.begin();
    i now points to the beginning of the vector v 
    advance(i,5);
     i now points to the fifth element form the 
    beginning of the vector v 
    
    advance(i,-1);
     i  now points to the fourth element from the 
    beginning of the vector 

    --------------------

    distance() Operation
It will return the number of elements or we can say distance between the first and the last iterator.
 i = v.begin();
    /* i now points to the beginning of the vector v 
    
    
    j = v.end();
    /* j now points to the end() of the vector v 
    
    cout << distance(i,j) << endl;
    /* prints 10 , 

    next() Operation
It will return the nth iterator to i, i.e iterator pointing to the nth element from the element pointed by i.

SYNTAX: next(iterator i ,int n)

prev() Operation
It will return the nth predecessor to i, i.e iterator pointing to the nth predecessor element from the element pointed by i.

SYNTAX: prev(iterator i, int n)

begin() Operation
This method returns an iterator to the start of the given container.

SYNTAX: begin()

end() Operation
This method returns an iterator to the end of the given container.

SYNTAX: end()

*/