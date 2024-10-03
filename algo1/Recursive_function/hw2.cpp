#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void left_max(int arr[], int len , int sp){
    if(sp == len - 1)
        return;
    left_max (arr , len , sp  + 1);
    arr[sp] = max(arr[sp] , arr[sp + 1]);
}

void left_max2(int arr[],int len){
    if(len == 1)
        return;
    left_max2(arr + 1,len - 1); // will make right side
    arr[0] =max(arr[0], arr[1]);
}

void test(int arr[], int len) {
    if (len == 0)
        return;
    cout << arr[len - 1] << " ";
    test(arr, len - 1);
}

int suffing_sum(int arr[], int n , int len){
    if(n == 0)
        return 0;
    return arr[len - 1] + suffing_sum(arr , n - 1 , len - 1);
}

int prefix_sum (int arr[] , int len , int n){
    if(n == 0)
        return 0;
    return arr[n - 1] + prefix_sum(arr , len - 1 , n - 1);
}

bool is_palindrome(int arr [] , int start , int end){
    if(start >= end)
        return true;
    if(arr[start] != arr[end])
        return false;
    return is_palindrome(arr ,start + 1 , end - 1);
}

bool is_prime(int m, int cur_test_number = 3) {
	if (m == 2)
		return true;

	if (m <= 1 || m % 2 == 0)
		return false;

	if (m == cur_test_number)
		return true;

	if (m % cur_test_number == 0)
		return false;

	return is_prime(m, cur_test_number + 1);
}

int count_primes(int start , int end){
    if(start > end)
        return 0;
    
    int res = count_primes(start + 1 , end);
    if(is_prime(start))
        res += 1;
    return res;
}
bool is_prefix(string main , string prefix , int sp = 0){
    if(sp == prefix.size())
        return true;
    if(main[sp] != prefix[sp])
        return false;
    is_prefix(main, prefix , sp + 1);
}

int di[] = {1, 0, 1};  // Possible directions: down, right, diagonal
int dj[] = {0, 1, 1};

int path_sum(int grid[100][100], int rows, int cols, int row = 0, int col = 0) {
    int sum = grid[row][col];
    
    // Base case: if we reached the bottom-right corner
    if (row == rows - 1 && col == cols - 1)
        return sum;
    
    int mx = -1, maxval = -1;  // Initialize to -1 to track the best path

    // Explore the 3 possible directions (down, right, diagonal)
    for (int i = 0; i < 3; i++) {
        int nr = row + di[i];  // New row
        int nc = col + dj[i];  // New column

        // Check if the new position is out of bounds
        if (nr >= rows || nc >= cols)
            continue;

        // Find the maximum value among the possible moves
        if (maxval < grid[nr][nc]) {
            maxval = grid[nr][nc];
            mx = i;
        }
    }

    // Move in the direction that gives the maximum value
    int nr = row + di[mx];
    int nc = col + dj[mx];

    // Recursively compute the path sum
    return sum + path_sum(grid, rows, cols, nr, nc);
}

void solve() {
    int grid[100][100];
    int n, m;

    cin >> n >> m;

    // Input grid values
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    // Compute the path sum from the top-left to the bottom-right corner
    cout << path_sum(grid, n, m) << endl;
    // int len = 6;
    // //int arr[] = {1 , 3 , 5 ,7, 5 , 2};
    // int arr[] = { 1, 8, 2, 8, 1 };
    // cout << is_prefix("abcdefg" , "abcd" , 3) << endl;
    // cout << is_prefix("abcdefg" , "" , 3) << endl;
    // cout << is_prefix("abcdefg" , "abd" , 3) << endl;
    // cout << endl;
	// cout << is_palindrome(arr, 0, 4)<<"\n";
	// cout<<count_primes(10, 200)<<"\n";

    // //left_max2(arr , len );
    // test(arr ,len);
    // cout << endl;
    // for(int i = 0 ; i < len; i ++)
    //     cout << arr[i]<< " ";
    // cout << endl;
    //cout << prefix_sum(arr , len , 3);    
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}