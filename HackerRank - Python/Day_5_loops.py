#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    for number in range(10):
        if number <= 9:
            result = (number+1)*n
            print(n,"x" ,(number+1),"=",result)
