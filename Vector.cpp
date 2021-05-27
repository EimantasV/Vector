#include<iostream>
#include <string>
#include <algorithm>
#include "Vector.h"
#include <vector>
#include <chrono>

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
        manoV.clear();
    originalV.clear();
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
        manoV.clear();
    originalV.clear();
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
        manoV.clear();
    originalV.clear();
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
        manoV.clear();
    originalV.clear();
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
    manoV.clear();
    originalV.clear();
}

void test6(int size)
{
    Vector<int> manoV;
    std::vector<int> originalV;

    std::cout << "\nallocation speed test: \n";
    std:: cout << size << " elementu: \n";
    auto clock_start = std::chrono::system_clock::now();

    for(int i =0;i<size;i++)
    {
        manoV.push_back(i);
    }

    auto clock_now = std::chrono::system_clock::now();
    float currentTime = float(std::chrono::duration_cast<std::chrono::microseconds>(clock_now - clock_start).count());
    std::cout << "mano vector allocation time: " << currentTime / 1000000 << " S \n";


    clock_start = std::chrono::system_clock::now();

    for(int i =0;i<size;i++)
    {
        originalV.push_back(i);
    }

    clock_now = std::chrono::system_clock::now();
    currentTime = float(std::chrono::duration_cast<std::chrono::microseconds>(clock_now - clock_start).count());
    std::cout << "std vector allocation time: " << currentTime / 1000000 << " S \n\n";
    manoV.clear();
    originalV.clear();
}

void test7()
{
    Vector<int> manoV;
    std::vector<int> originalV;
    int manoCounter = 0;
    int stdCounter = 0;
    int manoTemp = manoV.capacity();
    int stdTemp = originalV.capacity();

    std::cout << "Count capacity updates test: \n";

    for(long long i =0;i<100000000;i++)
    {
        manoV.push_back(i);
        originalV.push_back(i);

        if(manoV.capacity() != manoTemp)
        {
            manoCounter++;
            manoTemp = manoV.capacity();
        }
        if(originalV.capacity() != stdTemp)
        {
            stdCounter++;
            stdTemp = originalV.capacity();
        }
    }
    std::cout << "mano vector updates: " << manoCounter << ", std vector updates: " << stdCounter << "\n";
    manoV.clear();
    originalV.clear();

}

int main()
{
    test1(); // test []
    test2(); // test capacity
    test3(); // iterator test
    test4(); // clear test
    test5(); // resize test

    test6(100000000); // allocation speed

    test7(); // capacity update counter
    
    system("pause");
    return 0;
}