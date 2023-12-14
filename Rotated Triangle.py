def nStarTriangle(n: int) -> None:
    # Write your code here.
     # Write your code here.
    for row in range(n - 1, -n, -1):
        print("*" * (n - abs(row)))
    pass
