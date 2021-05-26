#include<iostream>
#include <string>
#include <algorithm>
#include "Vector.h"
#include <vector>

void test1()
{
    Vector<int> manoV;
    std::vector<int> originalV;

    for(int i =0;i<10;i++)
    {
        manoV.push_back(i);
        originalV.push_back(i);
    }
    std::cout << "Nuskaitymo testas naudojant []: \n"; 
    for(int i =0;i<10;i++)
    {
        std::cout << "mano vector: " <<manoV[i] << ", std vector: " << originalV[i]<<"\n"; 
    }
    std::cout << "\n"; 
}

void test2()
{
    Vector<int> manoV;
    std::vector<int> originalV;
    std::cout << "Capacity test: \n"; 
    for(int i =0;i<18;i++)
    {
        manoV.push_back(i);
        originalV.push_back(i);
        std::cout << i << ") " << "mano vector: "<<  manoV.capacity()  << ", std vector: "<< originalV.capacity() << "\n"; 

    }
    
    std::cout << "\n"; 
}

void test3()
{
    Vector<int> manoV;
    std::vector<int> originalV;

    for(int i =0;i<10;i++)
    {
        manoV.push_back(i);
        originalV.push_back(i);
    }

    std::cout << "iterator print all test: \n";

    Vector<int>::iterator manoIt = manoV.begin();
    for(manoIt;manoIt!= manoV.end();manoIt++)
    {
        std::cout << "mano vector iterator: " << *manoIt << "\n";
    }

    std::vector<int>::iterator origIt = originalV.begin();
    for(origIt;origIt!= originalV.end();origIt++)
    {
        std::cout << "std vector iterator: " << *origIt << "\n";
    }

    std::cout << "\n"; 
}

void test4()
{
    Vector<int> manoV;
    std::vector<int> originalV;

    for(int i =0;i<10;i++)
    {
        manoV.push_back(i);
        originalV.push_back(i);
    }

    std::cout << "clear test: \n";
    std::cout << "pries: " << "mano vector size: " << manoV.size() << ", std vector size: " << originalV.size() << "\n";

    manoV.clear();
    originalV.clear();

    std::cout << "po: " << "mano vector size: " << manoV.size() << ", std vector size: " << originalV.size() << "\n";
    std::cout << "\n"; 
}
void test5()
{
    Vector<int> manoV;
    std::vector<int> originalV;

    for(int i =0;i<10;i++)
    {
        manoV.push_back(i);
        originalV.push_back(i);
    }
    std::cout << "resize test: \n";
    std::cout << "iterator print before resize: \n";
    Vector<int>::iterator manoIt = manoV.begin();
    for(manoIt;manoIt!= manoV.end();manoIt++)
    {
        std::cout << "  mano vector iterator: " << *manoIt << "\n";
    }

    std::vector<int>::iterator origIt = originalV.begin();
    for(origIt;origIt!= originalV.end();origIt++)
    {
        std::cout << "  std vector iterator: " << *origIt << "\n";
    }
    manoV.resize(5);
    originalV.resize(5);
    std::cout << "iterator print after resize: \n";
    manoIt = manoV.begin();
    for(manoIt;manoIt!= manoV.end();manoIt++)
    {
        std::cout << "  mano vector iterator: " << *manoIt << "\n";
    }

    origIt = originalV.begin();
    for(origIt;origIt!= originalV.end();origIt++)
    {
        std::cout << "  std vector iterator: " << *origIt << "\n";
    }
}


int main()
{
    test1(); // test []
    test2(); // test capacity
    test3(); // iterator test
    test4(); // clear test
    test5(); // resize test
    
    system("pause");
    return 0;
}