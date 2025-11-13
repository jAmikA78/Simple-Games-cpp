# Simple Games

A collection of simple console-based games written in C++.

## Games Included

### 1. Rock Paper Scissors (`rock_paper.cpp`)

A two-player Rock Paper Scissors game where players compete in multiple rounds.

**Features:**

- Two-player gameplay
- Multiple rounds with score tracking
- Input validation for game moves
- Display of current scores

**How to Play:**

- Enter names for both players
- Each round, both players enter their choice: rock, paper, or scissors
- First player to enter an invalid move ends the game
- Winner is determined by standard Rock Paper Scissors rules

---

### 2. Snake Game (`snake.cpp`)

A classic Snake game where you navigate a growing snake to eat fruit.

**Features:**

- Real-time gameplay
- Snake grows as it eats fruit
- Score tracking
- Game over on collision with walls or self

**Controls:**

- `w` - Move up
- `s` - Move down
- `d` - Move right
- `a` - Move left
- `x` - Exit game

**Game Rules:**

- Navigate the snake (represented by `O` for head and `o` for body) to eat fruit (`#`)
- Each fruit eaten increases your score by 1 and grows the snake
- Game ends if the snake hits the walls or itself
- Game board is 40x20

---

### 3. Tic Tac Toe (`x,o.cpp`)

A two-player Tic Tac Toe game on a 3x3 board.

**Features:**

- Two-player alternating turns
- Position-based input system (positions numbered 1-9)
- Win detection for rows, columns, and diagonals
- Draw detection

**How to Play:**

- Positions are numbered 1-9 on a 3x3 grid
- Players alternate turns, starting with X
- Enter the position number where you want to place your mark
- First player to get three in a row (horizontally, vertically, or diagonally) wins
- Game declares a draw if all positions are filled with no winner

---

## Requirements

- C++ compiler (Visual Studio, MinGW, or GCC)
- Windows operating system (due to `conio.h` and `Windows.h` dependencies in snake.cpp)

## Compilation

Compile each game individually:

```bash
g++ rock_paper.cpp -o rock_paper.exe
g++ snake.cpp -o snake.exe
g++ x,o.cpp -o xo.exe
```

Or using Visual Studio:

```bash
cl rock_paper.cpp
cl snake.cpp
cl x,o.cpp
```

## Running the Games

```bash
./rock_paper.exe
./snake.exe
./xo.exe
```

## Notes

- The Snake game uses Windows-specific libraries (`conio.h`, `Windows.h`), so it will only compile on Windows systems
- All games are console-based with simple text-based interfaces
- The games store score/progress in memory during gameplay only
