#include <iostream>
#include <vector>
#include <cassert>
#include "find_primes.cpp"

using namespace std;

void testFindPrimes() {
    assert(findPrimes(1).empty());
    assert(findPrimes(2) == vector<int>{2});
    assert(findPrimes(10) == vector<int>{2, 3, 5, 7});
    assert(findPrimes(20) == vector<int>{2, 3, 5, 7, 11, 13, 17, 19});
    cout << "All tests passed!" << endl;
}

int main() {
    testFindPrimes();
    return 0;
}
