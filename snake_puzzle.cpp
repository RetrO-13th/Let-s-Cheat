#include<iostream>

using namespace std;

void snake_puzzle(int n, int m);

int main()
{
    int n, m;
    cin >> n >> m;

    snake_puzzle(n, m);

    return 0;
}

/*  Printing number in a puzzle:

    we need to follow this algorithm:

    1st row ---> 1           2           ...     m-1         m
    2nd row ---> 2m          2m - 1      ...     m + 2       m + 1
    3rd row ---> 2m + 1      2m + 2      ...     3m - 1      3m
        .                                                     .
        .                                                     .
        .                                                     .

    so:

    1 -> m,     m + 1 <- 2m,     2m + 1 -> 3m,       3m + 1 <- 4m,  ...

    then we see (i - 1)(m) + 1 -> (i)(m) in odd rows and (i)(m) <- (i - 1)(m) + 1 in even rows.
    for odd rows we print numbers in an ascending order and even rows in a descending order. 

*/ 

void snake_puzzle(int n, int m)
{
    bool check = false;

    for (int i = 1; i <= n; i++)
    {
        if (!check)
        {
            for (int j = (i - 1)*m + 1; j <= i*m; j++)
            {
                cout << j << " ";
            }
            check = true;
        }
        else if (check)
        {
            for (int j = i*m; j >= (i - 1)*m + 1; j--)
            {
                cout << j << " "; 
            }
            check = false;
        }
        cout << endl;
    }
}
