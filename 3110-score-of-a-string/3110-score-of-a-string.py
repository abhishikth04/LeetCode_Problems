class Solution:
    def scoreOfString(self, s: str) -> int:
        list = []

        for i in range(len(s)):
            list.append(ord(s[i]))
        
        score = 0

        for i in range(len(list)-1):
            score += abs(list[i] - list[i+1])

        return score




        