# tic-tac-toe-variants
This project features two terminal-based C++ implementations of the classic Tic-Tac-Toe game, showcasing both the standard 3×3 version and a 4×4 expanded variant. Each version handles input validation, win condition checks, game progression, and allows players to replay rounds. Each file is self-contained and designed for a two-player console experience.

ttt_simple.cpp : This is a 3x3 terminal-based version of Tic Tac Toe for two players. It includes a visual grid display, input validation for moves, turn-based gameplay between X and O, and win condition checking across all 8 possible winning combinations (3 rows, 3 columns, 2 diagonals). Players are prompted to play additional rounds after each match.

ttt_adv.cpp : This version implements a 4x4 Tic Tac Toe board. It includes move validation, separate checks for winning rows and columns, and a clean board display using a 2D vector. Players alternate turns and the game identifies a winner when a complete row or column is filled with the same marker.

