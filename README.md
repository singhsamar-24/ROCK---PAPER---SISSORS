🎮 Rock–Paper–Scissors Game in C

A simple Rock–Paper–Scissors game written in C, made as a 1st-year B.Tech programming project.
The user plays against the computer, which generates random choices using rand().

🚀 Features

Beginner-friendly C code

Random computer moves using srand(time(0))

Simple if–else logic

Clear output explaining the result

Single-round gameplay

📂 How It Works

The user enters a choice:

1 → Rock

2 → Paper

3 → Scissors

The computer also picks a number from 1 to 3 using:

computerChoice = (rand() % 3) + 1;


Then the program compares both choices and prints:

You Win

Computer Wins

Draw
