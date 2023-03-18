class TrieNode:
    def __init__(self):
        self.child = {}
        self.endWord = False

class WordDictionary:

    def __init__(self):
        self.root = TrieNode()

    def addWord(self, word: str) -> None:
        curr = self.root
        for char in word:
            if char not in curr.child:
                curr.child[char] = TrieNode()
            curr = curr.child[char]
        curr.endWord = True
        

    def __search(self, word, curr):
        for i in range(len(word)):
            char = word[i]
            if char != '.': 
                if char not in curr.child:
                    return False
                curr = curr.child[char]
            else:
                i = i + 1
                for child in curr.child.values():
                    if self.__search(word[i:], child):
                        return True
                return False
        return curr.endWord

    def search(self, word: str) -> bool:
        return self.__search(word, self.root)


        


# Your WordDictionary object will be instantiated and called as such:
# obj = WordDictionary()
# obj.addWord(word)
# param_2 = obj.search(word)