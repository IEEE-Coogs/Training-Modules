# Introduction:
# This script demonstrates basic input and output operations in Python.
# It covers printing to the console, reading user input, formatted output,
# and basic file handling operations.

### *Basic Input and Output* ###

# Objective: Demonstrate how to print a simple message to the console
print("Hello, World!")

# Objective: Show how to read input from the console and print a personalized message
name = input("Enter your name: ")
print("Hello, " + name)


### *Formatted Output* ###

# Objective: Display how to use f-strings for formatted output
age = 21
print(f"I am {age} years old.")

# Objective: Demonstrate the 'format()' method for formatted output
score = 90
print("Your score is {}".format(score))


### *File Input and Output* ###

# Objective: Illustrate how to write a string to a file
with open("output.txt", "w") as file:
    file.write("This is a sample, creating and writing on output")

# Objective: Show how to read the content from a file and print it
with open("output.txt", "r") as file:
    content = file.read()
    print(content)
