#include <iostream>
using namespace std;

/*

You’re standing at the top-left of an r x c grid.
You want to reach the bottom-right.

You’re allowed only two moves:

Right

Down

Your job:

Count how many unique paths exist.

*/

int countPaths(int row, int column)
{
    if (row == 1 || column == 1)
    {
        return 1;
    }

    int rightPaths = countPaths(row, column - 1);
    int downPaths = countPaths(row - 1, column);

    return rightPaths + downPaths;
}

int main()
{

    cout << "The paths for a 3 by 3 grid are " << countPaths(3, 3);
}