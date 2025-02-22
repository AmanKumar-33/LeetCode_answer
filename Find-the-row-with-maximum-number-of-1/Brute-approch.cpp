// You have been given a non-empty grid ‘mat’ with 'n' rows and 'm' columns
//  consisting of only 0s and 1s. All the rows are sorted in ascending order.
// Your task is to find the index of the row with the maximum number of ones.
// Note: If two rows have the same number of ones, consider the one with a smaller
//  index. If there's no row with at least 1 zero, return -1


// Example 1:
// Input Format:
//  n = 3, m = 3, 
// mat[] = 
// 1 1 1
// 0 0 1
// 0 0 0
// Result:
//  0

// Example 2:
// Input Format:
//  n = 3, m = 3,
// mat[] =
// 1 1 1
// 1 1 1
// 1 1 1
// Result:
//  0

// n = 2, m = 2 , 
// mat[] = 
// 0 0
// 0 0
// Result:
//  -1


class solution{

    public:
    int rowWithMax1s(vector<vector<int>> arr,int n, int m){
        int max_row_index = 0;
        int index = -1;

        // traverse through the rows
        for(int i =0;i<n;i++){
            int count_ones = 0;
            for(int j =0;j<m;j++){
                if(arr[i][j] == 1){
                    count_ones++;
                    index = i;
                    
                }
            }
        }
    }
}