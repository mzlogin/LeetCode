/**
 * Source : https://leetcode.com/problems/judge-route-circle/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2017-08-26
 * */

/**
 * Problem:
 *
 * Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.
 * 
 * The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.
 * 
 * Example 1:
 * Input: "UD"
 * Output: true
 *
 * Example 2:
 * Input: "LL"
 * Output: false
 */

class Solution {
public:
    bool judgeCircle(string moves) {
        if (moves.size() == 0) {
            return true;
        }

        int upCount = 0;
        int downCount = 0;
        int leftCount = 0;
        int rightCount = 0;

        for (int i = 0; i < moves.size(); i++) {
            switch (moves[i]) {
            case 'U':
                upCount++;
                break;

            case 'D':
                downCount++;
                break;

            case 'L':
                leftCount++;
                break;

            case 'R':
                rightCount++;
                break;

            default:
                break;
            }
        }

        return (upCount == downCount) && (leftCount == rightCount);
    }
};
