/**
* @param n: an integer
*@details:
*We are given a positive integer number. We need to check whether the number
* is power of 2 or not.We are given a positive integer number. We need to check whether the number
* is power of 2 or not.
**/

#include <cassert>   /// for assert
#include <cstdint>
#include <iostream>  /// for IO operations

namespace bit_manipulation {

bool isPowerOfTwo(std ::int64_t n) {  // int64_t is preferred over int so that
                                      // no Overflow can be there.

    return n > 0 && !(n & n - 1); 

}
    
    }  // namespace bit_manipulation


/**
 * @brief Self-test implementations
 * @returns void
 */
static void test() {
    // n = 4 return true
    assert(bit_manipulation::isPowerOfTwo(4) == true);
    // n = 6 return false
    assert(bit_manipulation::isPowerOfTwo(6) == false);
    // n = 13 return false
    assert(bit_manipulation::isPowerOfTwo(13) == false);
    // n = 64 return true
    assert(bit_manipulation::isPowerOfTwo(64) == true);
    // n = 15 return false
    assert(bit_manipulation::isPowerOfTwo(15) == false);
    // n = 32 return true
    assert(bit_manipulation::isPowerOfTwo(32) == true);
    // n = 97 return false
    assert(bit_manipulation::isPowerOfTwo(97) == false);
    // n = 1024 return true
    assert(bit_manipulation::isPowerOfTwo(1024) == true);
    std::cout << "All test cases successfully passed!" << std::endl;
}
/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    test();  // run self-test implementations
    return 0;
}
