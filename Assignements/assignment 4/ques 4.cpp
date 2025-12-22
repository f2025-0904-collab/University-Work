#include <iostream>
#include <string>
using namespace std;

const int ROWS = 10;
const int COLS = 10;

void inputGrid(char grid[ROWS][COLS], int r, int c)
{
    cout << "Enter the crossword grid:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }
}

int countHorizontalWords(char grid[ROWS][COLS], int r, int c)
{
    int count = 0;

    for (int i = 0; i < r; i++)
    {
        int length = 0;
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] != '#')
            {
                length++;
            }
            else
            {
                if (length >= 3)
                    count++;
                length = 0;
            }
        }
        if (length >= 3)
            count++;
    }
    return count;
}

int countVerticalWords(char grid[ROWS][COLS], int r, int c)
{
    int count = 0;

    for (int j = 0; j < c; j++)
    {
        int length = 0;
        for (int i = 0; i < r; i++)
        {
            if (grid[i][j] != '#')
            {
                length++;
            }
            else
            {
                if (length >= 3)
                    count++;
                length = 0;
            }
        }
        if (length >= 3)
            count++;
    }
    return count;
}

string findLongestWord(char grid[ROWS][COLS], int r, int c)
{
    string longest = "", current = "";

    for (int i = 0; i < r; i++)
    {
        current = "";
        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] != '#')
            {
                current += grid[i][j];
            }
            else
            {
                if (current.length() > longest.length())
                    longest = current;
                current = "";
            }
        }
        if (current.length() > longest.length())
            longest = current;
    }

    for (int j = 0; j < c; j++)
    {
        current = "";
        for (int i = 0; i < r; i++)
        {
            if (grid[i][j] != '#')
            {
                current += grid[i][j];
            }
            else
            {
                if (current.length() > longest.length())
                    longest = current;
                current = "";
            }
        }
        if (current.length() > longest.length())
            longest = current;
    }

    return longest;
}

int main()
{
    int r, c;
    char grid[ROWS][COLS];

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    inputGrid(grid, r, c);

    int horizontal = countHorizontalWords(grid, r, c);
    int vertical = countVerticalWords(grid, r, c);
    string longestWord = findLongestWord(grid, r, c);

    cout << "\nHorizontal words: " << horizontal << endl;
    cout << "Vertical words: " << vertical << endl;
    cout << "Longest word: " << longestWord << endl;

    return 0;
}
