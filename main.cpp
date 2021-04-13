#include <iostream>

using namespace std;

int main()
{
    int ar[10] = {3, 3, 6, 2, 2, 8, 8, 8, 1, 2}; // Given by problem

    // Get rid of the clutter in a new array
    int uniq[5], cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        int element = ar[i];
        bool uniquePart = true;
        for (int j = 0; j < 5; j++) if (element == uniq[j])
            {
                uniquePart = false;
                break;
            }
        if (uniquePart)
        {
            uniq[cnt] = element;
            cnt++;
        }
    }

    // Testing results, will be removed
    cout << "uniq[5] = {";
    for (int i = 0; i < 5; i++)
    {
        cout << uniq[i];
        if (i + 1 <= 4) cout << ", ";
    }
    cout << "}";

    return 0;
}
