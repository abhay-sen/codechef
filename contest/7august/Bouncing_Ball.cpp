#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <algorithm>
using namespace std;

struct State
{
    vector<int> A;
    int position;
    int direction;
    State(vector<int> arr, int pos, int dir) : A(arr), position(pos), direction(dir) {}
    bool operator==(const State &other) const
    {
        return A == other.A && position == other.position && direction == other.direction;
    }
};

struct StateHash
{
    size_t operator()(const State &state) const
    {
        size_t hash = 0;
        for (int h : state.A)
        {
            hash = hash * 31 + h;
        }
        hash = hash * 31 + state.position;
        hash = hash * 31 + state.direction;
        return hash;
    }
};

bool simulate(vector<int> A, int start, int direction)
{
    int N = A.size();
    int i = start;
    while (i >= 0 && i < N)
    {
        if (A[i] > 0)
        {
            A[i]--;
            if (A[i] == 0)
            {
                direction = -direction;
            }
        }
        i += direction;
    }
    return all_of(A.begin(), A.end(), [](int h)
                  { return h == 0; });
}

int countWaysToDestroyWalls(int N, vector<int> &A)
{
    int ways = 0;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] == 0)
        {
            if (simulate(A, i, 1))
            { // Push to the right
                ways++;
            }
            if (simulate(A, i, -1))
            { // Push to the left
                ways++;
            }
        }
    }
    return ways;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        int result = countWaysToDestroyWalls(N, A);
        cout << result << endl;
    }
    return 0;
}
