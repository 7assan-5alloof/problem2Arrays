#include <iostream>

using namespace std;

int main()
{
    int ar[10] = {3, 3, 6, 2, 2, 8, 8, 8, 1, 2}; // Given by problem

    // Get rid of the clutter in a new array
    int uniq[5], cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        // Will get rid of any duplicate elements
        bool uniqu = true;
        for (int j = 0; j < 10; j++)
        {
            if (i == j) continue;
            if (ar[i] == ar[j]) uniqu = false;
        }

        // Will be executed if no duplicates are caused
        if (uniqu)
        {
            uniq[cnt] = ar[i];
            if (cnt == 5) break;
            cnt++;
        }
    }

    // Will be removed, just testing by seeing the final values
    cout << "uniq[5] = {";
    for (int i = 0; i < 5; i++)
    {
        cout << uniq[i];
        if (i + 1 <= 4) cout << ", ";
    }
    cout << "}";

    return 0;
}
