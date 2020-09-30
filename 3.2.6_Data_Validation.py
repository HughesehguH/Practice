#!/usr/bin/env python3
"""
3.2.6 - Data Validation
"""
def main():
    """
    Args: None
    Returns: a default 0
    Description: Demonstrates the ability to perform data validation.
    """
    is_number = False
    number = 0
    # Input validation to make the user enter a number
    while not is_number:
        usr_input = input("Enter a number: ")

        try:
            number = int(usr_input)
            is_number = True

        except ValueError:
            print("Error! That's invalid input\n\n")

    return 0

if __name__ == '__main__':
    main()
