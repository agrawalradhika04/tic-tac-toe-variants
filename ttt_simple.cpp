#include <iostream>

using namespace std;

//Pre: Code is a string of size 9 with player marks in various positions
//Character c is the mark to be made (either ‘X’ or ‘O’)
//Post: Reads position of the mark from user and updates code
void read_char(string &code, char c){
    int pos = -1;
    
    cout << "Enter the position you want: ";
    cin >> pos;
        
    //If position is already filled, we will not replace but ask for another.
    while(code[pos - 1] != ' '){
        cout << "Wrong position. Enter the position again: ";
        cin >> pos;
    }
    code[pos - 1] = c;
}


//Pre: Code is a string of size 9 with player marks in various positions
//Post: Draws a grid to the screen with marks in correct positions
void draw_grid(string code){
    for(int i = 0; i < code.size(); i = i + 3){
        cout << code[i] << " | " << code[i + 1] << " | " << code[i + 2] << endl;
        if(i < 6)        cout << "--------------" << endl;
    }
}

//Pre: Code is a string of size 9 with player marks in various positions
//Character c is the mark to check for a win (either ‘X’ or ‘O’)
//Post: Returns 1 if there is a winning arrangement for player c returns 0 otherwise
int check_win(string code, char c){
    
    if(code[0] == c){
        if(code[1] == c && code[2] == c) return 1; // top row
        if(code[3] == c && code[6] == c) return 1; // left column
        if(code[4] == c && code[8] == c) return 1; // main diagonal
    }

    if(code[1] == c && code[4] == c && code[7] == c) return 1; // middle column

    if(code[2] == c){
        if(code[5] == c && code[8] == c) return 1; // right column
        if(code[4] == c && code[6] == c) return 1; // anti-diagonal
    }

    if(code[3] == c && code[4] == c && code[5] == c) return 1; // middle row

    if(code[6] == c && code[7] == c && code[8] == c) return 1; // bottom row

    return 0;
}

int main(){
    cout << "Welcome to TIC-TAC-TOE!" << endl;
    
    int run = 0;
    
    while(run == 0){
        string code = "         ";
        draw_grid(code);
        char c;
        for(int i = 0; i < code.size(); i++){
            if(i % 2 == 0){
                cout << "X's turn" << endl;
                read_char(code, 'X');
                c = 'X';
            }
            else{
                cout << "O's turn" << endl;
                read_char(code, 'O');
                c = 'O';
            }
            
            draw_grid(code);
            
            if(check_win(code, c) == 1){
                cout << "Player " << c << " has won!" << endl;
                i = 9;
            }
        }
        cout << "Would you like to play another round? Enter 1 for Yes or 0 for No.";
        int num;
        cin >> num;
        if(num == 0){
            run = 1;
        }
    }
}
