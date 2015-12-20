/**
 * Source : https://leetcode.com/problems/bulls-and-cows/
 * Author : Zhuang Ma
 * Email  : chumpma(at)gmail.com
 * Date   : 2015-11-01
 * */

/**
 * Problem:
 * You are playing the following Bulls and Cows game with your friend: You
 * write a 4-digit secret number and ask your friend to guess it, each time
 * your friend guesses a number, you give a hint, the hint tells your friend
 * how many digits are in the correct positions (called "bulls") and how many
 * digits are in the wrong positions (called "cows"), your friend will use
 * those hints to find out the secret number.
* 
* For example:
* 
* Secret number:  1807
* Friend's guess: 7810
* Hint: 1 bull and 3 cows. (The bull is 8, the cows are 0, 1 and 7.)
* According to Wikipedia: "Bulls and Cows (also known as Cows and Bulls or Pigs
* and Bulls or Bulls and Cleots) is an old code-breaking mind or paper and
* pencil game for two or more players, predating the similar commercially
* marketed board game Mastermind. The numerical version of the game is usually
* played with 4 digits, but can also be played with 3 or any other number of
* digits."
* 
* Write a function to return a hint according to the secret number and friend's
* guess, use A to indicate the bulls and B to indicate the cows, in the above
* example, your function should return 1A3B.
* 
* You may assume that the secret number and your friend's guess only contain
* digits, and their lengths are always equal.
*/

class Solution {
public:
    string getHint(string secret, string guess) {
        string result = "";

        int bullsCount = 0;
        int cowsCount = 0;
        map<char, int> secretStats;
        map<char, int> guessStats;
        string newGuess = "";

        int i = 0;
        for (i = 0; i < secret.length(); i++) {
            if (secret[i] == guess[i]) {
                bullsCount += 1;
            } else {
                newGuess += guess[i];
                if (secretStats.find(secret[i]) != secretStats.end()) {
                    secretStats[secret[i]] += 1;
                } else {
                    secretStats[secret[i]] = 1;
                }
            }
        }

        for (i = 0; i < newGuess.length(); i++) {
            char c = newGuess[i];
            map<char, int>::iterator iter = secretStats.find(c);
            if (iter != secretStats.end()) {
                secretStats[c] -= 1;
                cowsCount += 1;
                if (secretStats[c] == 0) {
                    secretStats.erase(iter);
                }
            }
        }

        char szResult[128] = {0};
        sprintf(szResult, "%dA%dB", bullsCount, cowsCount);
        result = szResult;

        return result;
    }
};
