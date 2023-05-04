"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""
from collections import deque

class Solution:
    def maxDepth(self, root: 'Node') -> int:
    # def maxDepth(self, root: 'Node') -> List[List[int]]:
        q, res = deque([root]), 0
        visited = set()
        while q: 
            level = 0
            for i in range(len(q)):
                curr = q.popleft()
                if curr:
                    for child in curr.children:
                        q.append(child)
                    level = 1
            if level:
                res += 1
        return res
