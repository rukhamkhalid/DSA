#include <iostream> 
#include <list> 
#include <iterator> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
list<int> intList1, intList2; 
ostream_iterator<int> screen(cout, " "); 
intList1.push_back(23); 
intList1.push_back(58); 
intList1.push_back(58); 
intList1.push_back(36); 
intList1.push_back(15); 
intList1.push_back(98); 
intList1.push_back(58); 
cout << "Line 17: intList1: "; 
copy(intList1.begin(), intList1.end(), screen); 
cout << endl;  
intList2 = intList1;
cout << "Line 21: intList2: "; 
copy(intList2.begin(), intList2.end(), screen); 
cout << endl; 
intList1.unique(); 
cout << "Line 25: After removing the consecutive "
<< "duplicates," << endl
<< " intList1: "; 
copy(intList1.begin(), intList1.end(), screen); 
cout << endl; 
intList2.sort(); 
cout << "Line 29: After sorting, intList2: "; 
copy(intList2.begin(), intList2.end(), screen); 
cout << endl;
return 0; 
} 
