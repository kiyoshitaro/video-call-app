class TrieNode:
    def __init__(self):
        self.children = {}
        self.word = None
        
class Trie:
    def __init__(self):
        self.root = TrieNode()
    
    def insert(self, word):
        node = self.root
        for c in word:
            if c not in node.children:
                node.children[c] = TrieNode()
            node = node.children[c]
        node.word = word
    
class Solution:
    def findWords(self, board: List[List[str]], words: List[str]) -> List[str]:
        trie = Trie()
        for word in words:
            trie.insert(word)
        
        self.result = []
        
        def dfs(node, i, j):
            if node.word:
                self.result.append(node.word)
                node.word = None
            if i < 0 or j < 0 or i >= len(board) or j >= len(board[0]):
                return
            c = board[i][j]
            if c not in node.children:
                return
            node = node.children[c]
            board[i][j] = '#'
            dfs(node, i+1, j)
            dfs(node, i-1, j)
            dfs(node, i, j+1)
            dfs(node, i, j-1)
            board[i][j] = c
        
        for i in range(len(board)):
            for j in range(len(board[0])):
                dfs(trie.root, i, j)
        
        return self.result