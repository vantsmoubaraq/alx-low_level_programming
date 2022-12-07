#!/usr/bin/python3
'''
Module computes perimeter of an island
'''

def island_perimeter(grid):
    '''
    Function computes perimeter of an island
    '''
    land = 1
    width = 0
    max_len = 0
    for i in range(len(grid)):
        if land in grid[i]:
            width += 1
        length = 0
        for territory in range(len(grid[i])):
            length += grid[i][territory]
        if(length > max_len):
            max_len = length
    perimeter = 2 * (max_len + width)
    return perimeter