#!/usr/bin/env python2

class Solution:
    # @param s, a string
    # @return a string

    def reverse_words(self, s):
        if len(s) <= 1:
            return s.strip()

        s = s.split()
        out_str = ""
        for i in reversed(s):
            out_str += str(i) + " "

        return out_str.rstrip()


if __name__ == "__main__":
    s = " "
    demo = Solution()
    print demo.reverse_words(s)

