#!/bin/python3

import math
import os
import random
import re
import sys
from itertools import combinations
# Complete the alternate function below.
def alternate(s):
    results=[]
    st=list(set(s))
    if len(st)<2:
        return 0
    else:
        combos=list(combinations(st,len(st)-2))
        for i in combos:
            vals=[]
            temp=s
            for x in i:
                temp=temp.replace(x,"")    
            for y in range(len(temp)-1):
                if temp[y]==temp[y+1]:
                    vals.append(False)
                else:
                    vals.append(True)
            if all(vals)==True:
                results.append(len(temp))
            else:
                results.append(0)

    return max(results)
    

    


if __name__ == '__main__':

    l = int(input())
    s = input()
    result = alternate(s)
    print(result)
    

