# Introduction:
# This program demonstrates how to read multiple inputs in Python.

# Objective: Read two integers and one string from user input

# Reading input from the user
# Input should be entered in the format: integer integer string
user_input = input("Enter two integers followed by a string (e.g., 1 2 hello): ")

# Splitting the input into separate parts
a, b, x = user_input.split()

# Converting the first two inputs to integers
a = int(a)
b = int(b)

# Printing the values to verify
print(f"The first integer is: {a}")
print(f"The second integer is: {b}")
print(f"The string is: {x}")
