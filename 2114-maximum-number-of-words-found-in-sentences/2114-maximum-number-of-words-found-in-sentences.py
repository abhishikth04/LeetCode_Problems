class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        count_arr = []
        for i in range(len(sentences)):
            temp_arr = []
            x = sentences[i]
            temp_arr = [str(i) for i in x.split(" ")]
            count_arr.append(len(temp_arr))

        return(max(count_arr))

        