#include <iostream>
#include <random>
using namespace std;


void shuffle(int n[])
{
    for (int i = 0; i < n.size(); i++)
    {
        int ran = distr(0,n.size());
        int temp = n[i];
        n[i] = n[ran];
        n[ran] = temp;
    }
   }



