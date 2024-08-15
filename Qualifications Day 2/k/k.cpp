#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define ll long long


#define all(vec) vec.begin(), vec.end()

void fio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

//void file() {
//    #ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//}


void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
template<typename T>
void print(const vector<T> &v) {
    for (int i: v) {
        cout << i << " ";
    }
    cout << endl;
}





int trailing_zeros(int number) {
    int result = 0;
    int divisor = 5;

    while (number / divisor > 0) {
        result += number / divisor;
        divisor *= 5;
    }
    return result;
}

const int N = 1e6 + 5;
vector<int> large_prime_divisor(N, 0);

void sieve(int limit_number) {
    vector<int> is_prime(limit_number, 1);
    is_prime[0] = is_prime[1] = 0;
    for (int p = 2; p * p <= limit_number; p++) {

        if (is_prime[p]) {
            large_prime_divisor[p] = p;
            for (int i = p * p; i <= limit_number; i += p) {
                is_prime[i] = false;
                large_prime_divisor[i] = p;
            }
        }
    }
}

int mod_of_large_number(string number, int m) {
    int result = 0;

    for (char digit: number) {
        result = (result * 10 + (digit - '0')) % m;
    }

    return result;
}

int n, k;
vector<int> vec(N);

ll get_cost(ll number) {
    ll result = 0;
    for (int i = n / 2; i < n; i++) {
        result += max(0LL, number - vec[i]);
    }
    return result;

}


bool is_odd_sum_of_digits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum % 2 != 0;
}
int freq[N];

void number_of_prime_factors(int number) {
    int temp = number;
    for (int i = 2; i * i <= number; i++) {
        while (number % i == 0) {
            freq[temp]++;
            number /= i;
        }
    }
    if (number > 1) {
        freq[temp]++;
    }
}

void precompute_prime_factors() {
    for (int i = 2; i <= N; ++i) {
        number_of_prime_factors(i);
    }
}


int main() {
    fio();
//    file();

    int q;
    cin >> q;
    precompute_prime_factors();
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;

        int counter = 0;
        for (int i = l; i <= r; i++) {
            if (freq[i] == x)
                counter++;


        }
        cout << counter << endl;
    }
    return 0;
}
