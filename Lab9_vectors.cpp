// Lab9_vectors.cpp
// This program shows some simple vector examples, and asks for simple tasks.
// Reference: Lippman, section 3.3

// Author: Luis Rivera

// IMPORTANT NOTE: YOU MAY NEED TO COMPILE ADDING THE FOLLOWING FLAG: -std=c++11
// Example: g++ Lab9_vectors.cpp -o Lab9_vectors -std=c++11
// Some initialization methods and other things are not supported by the old standard.

#include <iostream>
#include <vector>

using namespace std;

// Main function. Shows a few examples. Complete the assignments stated in the comments.
int main()
{
	vector<int> ivec1(5), ivec2;
	vector<double> dvec1{5.1}, dvec2(5,1.5);
	vector<string> svec1 = {"hello", "world"};
	// vector<myClass> myCvec;	// you can have vectors of objects
	// in general: vector<Type> vec;	// vector is a template

	for(int i = 0; i < ivec1.size(); i++)
		cout << ivec1[i] << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:ivec1)	// This is equivalent to the above for loop
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:dvec2)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
	
	for(auto i:svec1)
		cout << i << endl;
	cout << "\n------------------------------------------------------------------" << endl;
		
	cout << "Original size: " << ivec2.size() << endl;
	ivec2.push_back(50);
	cout << "New size: " << ivec2.size() << "\nAdded element: " << ivec2[0] << endl;
	cout << "\n------------------------------------------------------------------" << endl;
		
// ***********************************************************************
// Try all the wasy to initializa a vector shown in Table 3.4. Use the
// vectors above and/or declare new vectors.
// Some of those operations have already been used, but write your
// own examples.
	
	// Empty Vector
	vector<int> tivec1;
	// Initialize w/ elements
	vector<int> tivec2{1, 2, 3};
	vector<int> tivec6 = {0, 1, 2};
	// Initialize w/ elements of tivec2:
	vector<int> tivec3(tivec2);
	// Same as above
	vector<int> tivec4 = tivec2;
	// 10 elements w/ val '0'
	vector<int> tivec5(10, 0);
// Do exercises 3.14 and 3.15 from Lippman (page 102)
	// 3.14 Read sequence of ints from cin into vector

	cout << "Enter a series of integers, ending with non-int" << endl;
	int tmpi, i=0;
	while(1)
	{
		cin >> tmpi;
		if(isdigit(tmpi))
		{
			tivec5[i++] = tmpi;
		}
		else
			break;
	}
	for(auto i : tivec5)
	{
		cout << i;
	}

	// 3.15 - 3.14 but w/ strings instead
	vector<string> svec12;
	cout << "Enter a series of strings " << endl;
	string s;
	i=0;
	while(1)
	{
		cin >> s;
		svec12[i++] = s;
	}
	for(auto c : svec12)
	{
		cout << c;
	}




// Try all the vector operations shown in table 3.5. Use the vectors above
// or define new ones. Try different types.

	/*
	   .empty()
	   .size()
	   .push_back{val} // i.e. append
	   vec[n]
	   v1 = v2
	   v1 = {2, 3, 1}
	   v1 == v2
	   v != v2
	   <  <=, >, >=

	   */

// ***********************************************************************

	return 0;
}
