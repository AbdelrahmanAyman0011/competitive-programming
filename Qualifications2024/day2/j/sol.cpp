#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string decode_name(const string& S) {
    string decoded = "";
    int left = 0, right = S.size() - 1;
    while (left <= right) {
        decoded += S[left++];
        if (left <= right) {
            decoded += S[right--];
        }
    }
    return decoded;
}

string decode_date(const string& T) {
    string decoded = "";
    for (char c : T) {
        decoded += (c - 'A') + '0';
    }
    return decoded;
}

int main() {
    string S, T;
    cin >> S >> T;

    string decoded_name = decode_name(S);
    string decoded_date = decode_date(T);

    // Format the date using stringstream
    stringstream ss;
    ss << decoded_date.substr(0, 2) << "/" << decoded_date.substr(2, 2) << "/" << decoded_date.substr(4, 4);
    string formatted_date;
    ss >> formatted_date;

    cout << decoded_name << endl;
    cout << formatted_date << endl;

    return 0;
}
