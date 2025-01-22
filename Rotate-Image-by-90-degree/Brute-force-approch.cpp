#include <cassert>   /// for assert
#include <iostream>  /// for IO operations
#include <vector> 
using namespace std;   /// for std::vector
/**
 * @brief Roatate the Image by 90 degree
 * @namespace
 */
namespace rotate_image {
    vector<vector<int>>rotate(vector<vector<int>>& matrix){
        int n = matrix.size();
        vector<vector<int>>result(n, vector<int>(n,0));
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                result[j][n-i-1] = matrix[i][j];


            }
        }
        return result;
    }

}
/**
 * @brief Test function
 * @returns void
 */
static void test() {
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>result = rotate_image::rotate(matrix);
    assert(result[0][0] == 7);
    assert(result[0][1] == 4);
    assert(result[0][2] == 1);
    assert(result[1][0] == 8);
    assert(result[1][1] == 5);
    assert(result[1][2] == 2);
    assert(result[2][0] == 9);
    assert(result[2][1] == 6);
    assert(result[2][2] == 3);
    cout << "All test cases pass" << endl;

}
/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    test();
    return 0;
}