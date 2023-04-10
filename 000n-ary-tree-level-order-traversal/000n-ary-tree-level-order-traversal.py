"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""
from collections import deque
class Solution:
    def levelOrder(self, root: 'Node') -> List[List[int]]:
        q, res = deque([root]), []
        visited = set()
        while q: 
            level = []
            for i in range(len(q)):
                curr = q.popleft()
                if curr:
                    for child in curr.children:
                        q.append(child)
                    level += [curr.val]
            if len(level):
                res += [level]
        return res
        
        