#include<iostream>
#include<fstream>
#include<time.h>

using namespace std;
int randNum(int min, int max)
{
    return min + rand() % (max - min + 1);
}

int main() {
    srand(time(0));
    int min = 20;
    int max = 50;
    return 0;
}