#include <iostream>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' }; // mark 3X3 matrix
char player = '#';
void Draw()
{
    system("cls");
    cout << "Tic Tac Toe " << endl;     // 1 2 3
    for (int i = 0; i < 3; i++)         // 4 5 6
    {                                   // 7 8 9
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Input()
{
    int a;
    cout << "Press the number of the field: "; // player choose number 
    cin >> a;
 
    if (a == 1)
        matrix[0][0] = player;
    else if (a == 2)
        matrix[0][1] = player;
    else if (a == 3)
        matrix[0][2] = player;
    else if (a == 4)
        matrix[1][0] = player;
    else if (a == 5)
        matrix[1][1] = player;
    else if (a == 6)
        matrix[1][2] = player;
    else if (a == 7)
        matrix[2][0] = player;
    else if (a == 8)
        matrix[2][1] = player;
    else if (a == 9)
        matrix[2][2] = player;
}
void TogglePlayer()
{
    if (player == '#')
        player = '*';
    else
        player = '#';
}
char Win()
{
    //first player
    if (matrix[0][0] == '#' && matrix[0][1] == '#' && matrix[0][2] == '#')
        return '#';
    if (matrix[1][0] == '#' && matrix[1][1] == '#' && matrix[1][2] == '#')
        return '#';
    if (matrix[2][0] == '#' && matrix[2][1] == '#' && matrix[2][2] == '#')
        return '#';
 
    if (matrix[0][0] == '#' && matrix[1][0] == '#' && matrix[2][0] == '#')
        return '#';
    if (matrix[0][1] == '#' && matrix[1][1] == '#' && matrix[2][1] == '#')
        return 'X';
    if (matrix[0][2] == '#' && matrix[1][2] == '#' && matrix[2][2] == '#')
        return '#';
 
    if (matrix[0][0] == '#' && matrix[1][1] == '#' && matrix[2][2] == '#')
        return '#';
    if (matrix[2][0] == '#' && matrix[1][1] == '#' && matrix[0][2] == '#')
        return '#';
 
    //second player
    if (matrix[0][0] == '*' && matrix[0][1] == '*' && matrix[0][2] == '*')
        return '*';
    if (matrix[1][0] == '*' && matrix[1][1] == '*' && matrix[1][2] == '*')
        return '*';
    if (matrix[2][0] == '*' && matrix[2][1] == '*' && matrix[2][2] == '*')
        return '*';
 
    if (matrix[0][0] == '*' && matrix[1][0] == '*' && matrix[2][0] == '*')
        return '*';
    if (matrix[0][1] == '*' && matrix[1][1] == '*' && matrix[2][1] == '*')
        return '*';
    if (matrix[0][2] == '*' && matrix[1][2] == '*' && matrix[2][2] == '*')
        return '*';
 
    if (matrix[0][0] == '*' && matrix[1][1] == '*' && matrix[2][2] == '*')
        return '*';
    if (matrix[2][0] == '*' && matrix[1][1] == '*' && matrix[0][2] == '*')
        return '*';
 
    return '/';
}
int main()
{
    Draw();
    while (1)
    {
        Input();
        Draw();
        if (Win() == '#')
        {
            cout << "# wins!" << endl;
            break;
        }
        else if (Win() == '*')
        {
            cout << "* wins!" << endl;
            break;
        }
        TogglePlayer();
    }
    system("pause");
    return 0;
}
