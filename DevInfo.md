# **__2048__**
---
## INTRODUCTION
Implement a 2D sliding block puzzle game where blocks with numbers are combined to add their values.
The rules are that each turn the player must perform a valid move shifting all tiles in one direction (up, down, left or right). A move is valid when at least one tile can be moved in that direction. When moved against each other tiles with the same number on them combine into one. A new tile with the value of 2 is spawned at the end of each turn if there is an empty spot for it. To win the player must create a tile with the number 2048. The player loses if no valid moves are possible.
The name comes from the popular open-source implementation of this game mechanic, **__2048.__**


---
## REQUIREMENTS:
* "Non-greedy" movement. The tiles that were created by combining other tiles should not be combined again during the same turn (move). That is to say that moving the tile row of
` [2][2][2][2] `
to the right should result in
` ......[4][4] `
and not
` .........[8] `
* "Move direction priority". If more than one variant of combining is possible, move direction shows one that will take effect. For example, moving the tile row of
` ...[2][2][2] `
to the right should result in
` ......[2][4] `
and not
` ......[4][2] `
* Adding a new tile on a blank space. Most of the time new "2" is to be added and occasionally (10% of the time) - "4"
* Check for valid moves. The player shouldn't be able to skip their turn by trying a move that doesn't change the board.
* Win condition.
* Lose condition.
 
---

## 2048 - HOW TO PLAY?
 + The objective of the game is to get the number **__2048__** using additions of the number two and its multiples.
 + You will have a grid of 16 tiles. Two numbers will be given: usually two number twos, maybe number four.
 + Move up or down, left or right trying to join two equal numbers.
 + When two equal numbers are in touch, they will add up.
 + If we are run out of equal numbers on our grid, or we can not put them in touch, the **__game__** will provide us another two, a four or even an eight so we can keep on playing. If there are no free tiles on our grid, the game ends.
 + By adding numbers, we get higher numbers and we can approach to **__2048__**, which is the goal of the game.
 
 
