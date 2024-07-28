import sys


def foo():
    # Read input more efficiently using sys.stdin.read()
    data = sys.stdin.read().split()

    # Extracting the input values
    a = int(data[0])
    b = int(data[1])
    x = data[2]

    # Print output more efficiently using sys.stdout.write()
    sys.stdout.write(f"{a} {b} {x}\n")


if __name__ == "__main__":
    foo()
