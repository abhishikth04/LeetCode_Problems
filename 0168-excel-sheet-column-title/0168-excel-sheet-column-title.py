class Solution:
    def convertToTitle(self, columnNumber: int) -> str:

        title = ''
        while(columnNumber > 0):
            rem = (columnNumber - 1)%26
            title = chr(65 + rem) + title
            columnNumber = (columnNumber - 1)//26
        return title