#include <iostream>
using namespace std;

long long solveTOH(int N, int from, int to, int aux)
{
    // Your code here
    int count = 0;
    if (N == 1)
    {

        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        return 1;
    }

    count += solveTOH(N - 1, from, aux, to);
    cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
    count++;

    count += solveTOH(N - 1, aux, to, from);
    return count;
}

int main(int argc, char const *argv[])
{
    int moves;

    moves = solveTOH(3, 'A', 'C', 'B');
    cout << "\nTotal number of moves: " << moves << endl;

    return 0;
}
