#!/usr/bin/env python2

class LRUCache:

    # @param capacity, an integer
    def __init__(self, capacity):
        self.cache = {}
        self.new_key = []
        self.cache_len = capacity

    # @return an integer
    def get(self, key):
        if key in self.cache.keys():
            return self.cache[key]
        else:
            return -1

    # @param key, an integer
    # @param value, an integer
    # @return nothing
    def set(self, key, value):
        if key not in self.cache.keys():
            if len(self.cache) < self.cache_len:
                self.cache[key] = value
                self.new_key.append(key)
            else:
                self.cache.pop(self.new_key[0])
                self.cache[key] = value
                self.new_key.append(key)
                self.new_key.pop(0)
        else:
            self.cache[key] = value
            self.new_key.remove(key)
            self.new_key.append(key)

