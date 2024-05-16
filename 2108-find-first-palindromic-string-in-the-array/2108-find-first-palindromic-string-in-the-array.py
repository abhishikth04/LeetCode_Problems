class Solution:
    def firstPalindrome(self, words: List[str]) -> str:

        flag = 0
        for i in range(len(words)):
            x = words[i]
            y = x[-1 : : -1]
            if(x == y):
                flag += 1
                break
        if(flag == 1):
            return x
        else:
            return ""


        