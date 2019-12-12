#!/usr/bin/env python3

# Created by: Andrei Chirilov
# Created on: December 2019
# This program get's number from user then turns it into a list of it's digits


def digit_maker(numbers_list):
    res = []
    for x in numbers_list:
        res.append(int(x))
    return res


def main():
    # This function puts a number into a list of digits
    numbers_list = []

    # input
    numbers = input("enter a number: ")
    while not numbers.isdigit():
        print("Please enter a valid number")
        numbers = input("enter a number: ")
        numbers_list.append(numbers)

    # pass into the other function
    result = digit_maker(numbers)

    # output
    print(result)


if __name__ == "__main__":
    main()
