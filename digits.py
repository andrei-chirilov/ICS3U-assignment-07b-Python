#!/usr/bin/env python3

# Created by: Andrei Chirilov
# Created on: December 2019
# This program get's number from user then turns it into a list of it's digits

import random


def main():
    # This function puts a number into a list of digits

    # input
    numbers = input("enter a number: ")
    while (not numbers.isdigit()):
        print("Please enter a valid number")
        numbers = input("enter a number: ")

    # process
    res = []
    for x in numbers:
        res.append(int(x))

    # output
    print(res)


if __name__ == "__main__":
    main()
