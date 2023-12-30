# Redestribution of char to make all string equal
def makeequal(self,words:list[str])->bool:
    n = len(words)
    s  = ''.join(words)
    c= Counter(s)
    for i in c:
        if c[i] % n != 0:
            return False
        return True
    
# wrting the same code with less no of lines
    def makeEqual(self, words: List[str]) -> bool:
        n = len(words)
        s = reduce(Lambda a,b: a+b, words)
        c = Counter(s)
        return all([x % n == 0 for x in c.values()])

    

