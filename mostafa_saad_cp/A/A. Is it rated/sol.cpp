#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool ratingChanged = false;
    bool betterPlace = false;

    int prevRank, currRank;
    cin >> prevRank >> currRank;

    if (prevRank != currRank)
    {
        ratingChanged = true;
    }

    int prevRating = prevRank;
    for (int i = 1; i < n; ++i)
    {
        cin >> prevRank >> currRank;

        if (prevRank != currRank)
        {
            ratingChanged = true;
        }

        if (prevRank > prevRating)
        {
            betterPlace = true;
        }

        prevRating = prevRank;
    }

    if (ratingChanged)
    {
        cout << "rated\n";
    }
    else if (betterPlace)
    {
        cout << "unrated\n";
    }
    else
    {
        cout << "maybe\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}
