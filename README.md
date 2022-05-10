steven mai

```
 _____
/  ___\
| |     ++
| |____ ello
\_____/
```

# What is Othello?

Othello, a variant of the board game Reversi with a fixed initial setup of the board. Reversi is a is a strategy board game for two players, played on an 8×8 uncheckered board.

There are sixty-four identical game pieces called disks, which are light on one side and dark on the other. Players take turns placing disks on the board with their assigned color facing up. During a play, any disks of the opponent's color that are in a straight line and bounded by the disk just placed and another disk of the current player's color are turned over to the current player's color. The objective of the game is to have the majority of disks turned to display one's color when the last playable empty square is filled.[^1]

[^1]: Source: https://en.wikipedia.org/wiki/Reversi

# C++thello

C++thello is an open source terminal based implementation of Othello.

I have not tested this on Windows, so just use it on Mac or Linux.

# completed features
* start screen 
* end screen
* help screen
* cool logo that was hackily implemented too lazy to implement it better
* board function: setting board spots, getting board spots, setting up the board for a game, drawing the board
* black can place discs somehow

# to do list
* add input system
* add othello
* etc...

# Guide to Running the C++thello

## Downloading C++thello

1. Click the green "Code" button
2. Click download zip
3. Unzip the zip into your Downloads folder
   * Typically you can do that by double clicking onto it

## Opening up the terminal (on linux or mac)

### Mac

1. Press command + space
2. Type in "terminal"
3. Hit enter / return

### Linux

1. Press the super button / windows button
2. Type in "terminal"
3. Hit enter / return

## Navigating to the File

1. Type in `cd Downloads/programmingproject-main/app`
2. Make the program executable with `chmod +x main`
3. Run the program with `./main`

### may or may not run on Mac because of it being not from a verified developer

# Guide to Compiling

Assuming that you have already downloaded and unzipped the source code and have the terminal open.

This can circumvent the problem of it not being from a verified developer.

## Navigating to the File

Type in `cd Downloads/programmingproject-main/src`

## Compiling

1. Compile with the command `g++ *cpp -o main`
2. Run with `./main`

