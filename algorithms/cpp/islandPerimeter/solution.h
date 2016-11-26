/**
 * Source : https://leetcode.com/problems/island-perimeter/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2016-11-26
 * */

/*
 * Problem:
 *
 * You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water. Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells). The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
 *
 * Example:
 *
 * [[0,1,0,0],
 * [1,1,1,0],
 * [0,1,0,0],
 * [1,1,0,0]]
 *
 * Answer: 16
 */

class Solution {
public:
    int islandPerimeter(vector<vector<int> >& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }

        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0) {
                    continue;
                }

                if (j == 0 || grid[i][j-1] == 0) {
                    perimeter++;
                }

                if (i == 0 || grid[i-1][j] == 0) {
                    perimeter++;
                }

                if (j == cols-1 || grid[i][j+1] == 0) {
                    perimeter++;
                }

                if (i == rows-1 || grid[i+1][j] == 0) {
                    perimeter++;
                }
            }
        }

        return perimeter;
    }

    int islandPerimeter2(vector<vector<int> >& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }

        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0) {
                    continue;
                }

                perimeter += 4;

                if (j != 0 && grid[i][j-1] == 1) {
                    perimeter -= 2;
                }

                if (i != 0 && grid[i-1][j] == 1) {
                    perimeter -= 2;
                }
            }
        }

        return perimeter;
    }
};
