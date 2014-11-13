#!/usr/bin/env python2

class MinStack:
    # @param x, an integer
    # @return an integer
    def __init__(self):
        self.stack = []
        self.min_stack = []

    def push(self, x):
        self.stack.append(x)

        if not self.min_stack or x <= self.min_stack[-1]:
            self.min_stack.append(x)

    # @return nothing
    def pop(self):
        if self.stack.pop() is self.min_stack[-1]:
            self.min_stack.pop()

    # @return an integer
    def top(self):
        return self.stack[-1]

    # @return an integer
    def getMin(self):
        return self.min_stack[-1]

if __name__ == "__main__":
    demo = MinStack()
    demo.push(1)
    demo.push(2)
    demo.push(3)
    print demo.top()
    demo.pop()
    print demo.getMin()
                                            




