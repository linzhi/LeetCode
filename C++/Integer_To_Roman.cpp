/*
 * Author: linzhi
 *
 * Title: Integer to Roman
 *
 */

class Solution {
public:
    string intToRoman(int num) {
        string symbol("IVXLCDM");
        string ret;
        int i = 0;

        while (num) {
            int x = num % 10;

            switch(x) {
                case 1:
                case 2:
                case 3:
                    ret = string(x, symbol.at(i)) + ret;
                    break;
                case 4:
                    ret = symbol.at(i + 1) + ret;
                    ret = symbol.at(i) + ret;
                    break;
                case 5:
                    ret = symbol.at(i + 1) + ret;
                    break;
                case 6:
                case 7:
                case 8:
                    ret = string(x - 5, symbol.at(i)) + ret;
                    ret = symbol.at(i + 1) + ret;
                    break;
                case 9:
                    ret = symbol.at(i + 2) + ret;
                    ret = symbol.at(i) + ret;
                    break;
                default:
                    break;
            }
            num /= 10; 
            i += 2;
        }

        return ret;
    }
};



